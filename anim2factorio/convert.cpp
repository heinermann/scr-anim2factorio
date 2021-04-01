#include "convert.h"

#include <string>
#include <filesystem>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <stdexcept>
#include <sstream>
#include <vector>

#include "anim.h"
#include "image_predefs.h"

#include "../lodepng/lodepng.h"

// TODO: Starport and Factory overlays may not be correct

struct gfx_info_t {
  int frame_width;
  int frame_height;
  int line_length;  // number of frames per row
  int frame_count;
  int img_id;
};

void swapRGB(dds_img_t& img) {
  for (int i = 0; i < img.data.size(); i += 4) {
    std::swap(img.data[i], img.data[i + 2]);
  }
}

void bitBlit32(const std::vector<std::uint8_t>& src, int srcx, int srcy, int srcwidth, int srcheight, int srcrunbytes, std::vector<std::uint8_t>& dst, int dstx, int dsty, int dstrunbytes) {
  for (int y = 0; y < srcheight; ++y) {
    for (int x = 0; x < srcwidth; ++x) {
      int dstpos = (y + dsty) * dstrunbytes + (x + dstx) * 4;
      int srcpos = (y + srcy) * srcrunbytes + (x + srcx) * 4;
      dst[dstpos] = src[srcpos];
      dst[dstpos+1] = src[srcpos+1];
      dst[dstpos+2] = src[srcpos+2];
      dst[dstpos+3] = src[srcpos+3];
    }
  }
}

void toSpritesheet(const anim& anim_parent, dds_img_t& img, gfx_info_t* img_info = nullptr) {
  // Get compacted grp width/height to reduce image size
  std::uint16_t grpWidth = 0;
  std::uint16_t grpHeight = 0;
  int framecount = int(anim_parent.framedata.size());

  for (int i = 0; i < framecount; ++i) {
    const frame& f = anim_parent.framedata[i];
    grpWidth = std::max(grpWidth, f.width);
    grpHeight = std::max(grpHeight, f.height);
  }
  grpWidth += 2;
  grpHeight += 2;

  // Compute target cells per row
  int targetCellsPerRow = 2048 / grpWidth;  // something something graphics card texture width limitation for Factorio?

  int newImgWidth = std::min(targetCellsPerRow * grpWidth, framecount * grpWidth);
  int newImgHeight = int(std::ceil(double(framecount) / targetCellsPerRow)) * grpHeight;
  std::size_t imgDataSize = 4 * newImgWidth * newImgHeight;
  std::vector<std::uint8_t> newImg(imgDataSize, 0);

  for (int i = 0; i < framecount; ++i) {
    const frame& f = anim_parent.framedata[i];
    int srcx = f.x;
    int srcy = f.y;

    int dstx = (i % targetCellsPerRow) * grpWidth + (grpWidth - f.width)/2;
    int dsty = (i / targetCellsPerRow) * grpHeight + (grpHeight - f.height)/2;

    bitBlit32(img.data, srcx, srcy, f.width, f.height, img.width * 4, newImg, dstx, dsty, newImgWidth * 4);
  }
  img.data.swap(newImg);
  img.width = newImgWidth;
  img.height = newImgHeight;

  if (img_info != nullptr) {
    img_info->frame_width = grpWidth;
    img_info->frame_height = grpHeight;
    img_info->line_length = targetCellsPerRow;
    img_info->frame_count = framecount;
  }
}

void img_to_gfx_turns_order(dds_img_t& img, gfx_info_t* info) {
  int num_frames_without_turns = info->frame_count / 17;
  int num_remaining_frames = info->frame_count % 17;

  int num_rows_per_turn = int(std::ceil(double(num_frames_without_turns) / info->line_length));
  int num_extra_rows = int(std::ceil(double(num_remaining_frames) / info->line_length));
  
  int new_line_len = std::min(info->line_length, num_frames_without_turns);
  int new_width = new_line_len * info->frame_width;
  int new_height = (num_rows_per_turn * 17 + num_extra_rows) * info->frame_height;
  std::vector<std::uint8_t> new_img(new_width * new_height * 4);
  for (int i = 0; i < num_frames_without_turns; ++i) {
    for (int turn = 0; turn < 17; ++turn) {
      int srcx = ((i*17 + turn) % info->line_length) * info->frame_width;
      int srcy = ((i*17 + turn) / info->line_length) * info->frame_height;

      int dstx = (i % new_line_len) * info->frame_width;
      int dsty = (turn * num_rows_per_turn + i / new_line_len) * info->frame_height;

      bitBlit32(img.data, srcx, srcy, info->frame_width, info->frame_height, img.width * 4, new_img, dstx, dsty, new_width * 4);
    }
  }
  int extra_frames_start = num_frames_without_turns * 17;
  for (int i = extra_frames_start; i < info->frame_count; ++i) {
    int srcx = (i % info->line_length) * info->frame_width;
    int srcy = (i / info->line_length) * info->frame_height;

    int base_offset = i % extra_frames_start;
    int dstx = (base_offset % new_line_len) * info->frame_width;
    int dsty = (num_rows_per_turn * 17 + base_offset / new_line_len) * info->frame_height;

    bitBlit32(img.data, srcx, srcy, info->frame_width, info->frame_height, img.width * 4, new_img, dstx, dsty, new_width * 4);
  }
  img.data.swap(new_img);
  img.height = new_height;
  img.width = new_width;
  info->line_length = new_line_len;
}

void convert_img(anim& anim_data, const std::string& layer, bool gfxturns, gfx_info_t* result_info = nullptr) {
  gfx_info_t supplement;
  if (result_info == nullptr)
    result_info = &supplement;
    
  swapRGB(anim_data.data.at(layer));
  toSpritesheet(anim_data, anim_data.data.at(layer), result_info);
  if (gfxturns)
    img_to_gfx_turns_order(anim_data.data.at(layer), result_info);
}

bool has_layer(const anim& anim_data, const std::string& layer) {
  return anim_data.data.count(layer) > 0;
}

void write_png(const std::string& filename, const anim& anim_data, const std::string& layer) {
  const dds_img_t& img = anim_data.data.at(layer);
  int pngerr = lodepng_encode32_file(filename.c_str(), img.data.data(), img.width, img.height);
  if (pngerr != 0) {
    std::cerr << "PNG err: " << pngerr << std::endl;
    throw std::exception("Failed to write PNG");
  }
}

void apply_mask(dds_img_t& src, dds_img_t& dst_mask) {
  for (unsigned i = 0; i < dst_mask.data.size(); ++i) {
    dst_mask.data[i] &= src.data[i];
  }
}

std::string layer_to_lua_string(std::vector<std::string> layer) {
  std::ostringstream ss;
  ss << "    {\n";

  for (int i = 0; i < layer.size(); ++i) {
    ss << "      " << layer[i];
    if (i < layer.size() - 1) ss << ",";
    ss << "\n";
  }
  ss << "    }";
  return ss.str();
}

std::vector<std::string> get_layer_strings(const std::string& graphic_file, const gfx_info_t& info) {
  std::vector<std::string> result = {
    "filename = \"__starcraft__/graphics/" + graphic_file + "\"",
    "size = { " + std::to_string(info.frame_width) + ", " + std::to_string(info.frame_height) + " }",
    "line_length = " + std::to_string(info.line_length),
    "scale = 0.5"
  };

  if (image_predefs[info.img_id].draw_as_glow)
    result.emplace_back("draw_as_glow = true");

  if (image_predefs[info.img_id].draw_as_shadow)
    result.emplace_back("draw_as_shadow = true");

  if (image_predefs[info.img_id].gfx_turns) {
    result.push_back("frame_count = " + std::to_string(info.frame_count / 17));
    result.emplace_back("direction_count = 17");
    result.emplace_back("axially_symmetrical = true");
    result.emplace_back("animation_speed = 1 / 2.52");
  }
  else {
    result.push_back("frame_count = " + std::to_string(info.frame_count));
  }

  return result;
}

void convert(const std::string& input, const std::string& output_dir) {
  // Load the anim file
  std::ifstream infile(input, std::ios::binary);
  anim anim_data = loadAnim(infile);

  // Create PNG file
  std::string input_stem = std::filesystem::path(input).stem().string();
  std::string out_file_prefix = (std::filesystem::path(output_dir) / input_stem).string();

  bool has_diffuse = has_layer(anim_data, "diffuse");
  bool has_teamcolor = has_layer(anim_data, "teamcolor");
  bool has_light = has_layer(anim_data, "emissive");

  if (!has_diffuse) return;
  
  // Convert and write images
  gfx_info_t result_info;
  result_info.img_id = 995; // just a random id that has everything set to false
  bool gfxturns = false;
  if (size_t pos = input_stem.find("_"); pos != std::string::npos) {
    result_info.img_id = std::stoi(input_stem.substr(pos + 1));
    gfxturns = image_predefs[result_info.img_id].gfx_turns;
  }

  convert_img(anim_data, "diffuse", gfxturns, &result_info);
  write_png(out_file_prefix + "_diffuse.png", anim_data, "diffuse");

  if (has_teamcolor) {
    convert_img(anim_data, "teamcolor", gfxturns);
    apply_mask(anim_data.data.at("diffuse"), anim_data.data.at("teamcolor"));
    write_png(out_file_prefix + "_teamcolor.png", anim_data, "teamcolor");
  }

  if (has_light) {
    convert_img(anim_data, "emissive", gfxturns);
    write_png(out_file_prefix + "_emissive.png", anim_data, "emissive");
  }

  // Create lua file
  std::ofstream lua(out_file_prefix + ".lua");
  lua << "{\n"
    << "  type = \"animation\",\n"
    << "  name = \"starcraft_" << input_stem << "\",\n"
    << "  layers = {\n";
  
  auto diffuse_lua = get_layer_strings(input_stem + "_diffuse.png", result_info);
  lua << layer_to_lua_string(diffuse_lua);
  
  if (has_teamcolor) {
    auto teamcolor_lua = get_layer_strings(input_stem + "_teamcolor.png", result_info);
    teamcolor_lua.push_back("apply_runtime_tint = true");
    
    lua << ",\n" << layer_to_lua_string(teamcolor_lua);
  }

  if (has_light) {
    auto light_lua = get_layer_strings(input_stem + "_emissive.png", result_info);
    light_lua.emplace_back("flags = {\"light\"}");
    light_lua.emplace_back("draw_as_light = true");
    
    lua << ",\n" << layer_to_lua_string(light_lua);
  }
  lua << "\n  }\n}\n";
}

