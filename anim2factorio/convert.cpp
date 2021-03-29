#include "convert.h"

#include <string>
#include <filesystem>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <stdexcept>

#include "anim.h"

#include "../lodepng/lodepng.h"

struct gfx_info_t {
  int frame_width;
  int frame_height;
  int line_length;
  int frame_count;
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

void toSpritesheet(const anim& anim_parent, dds_img_t& img, gfx_info_t& img_info) {
  // Get compacted grp width/height to reduce image size
  std::uint16_t grpWidth = 0;
  std::uint16_t grpHeight = 0;
  for (int i = 0; i < anim_parent.framedata.size(); ++i) {
    const frame& f = anim_parent.framedata[i];
    grpWidth = std::max(grpWidth, f.width);
    grpHeight = std::max(grpHeight, f.height);
  }
  grpWidth += 2;
  grpHeight += 2;

  // Compute target cells per row
  int targetCellsPerRow = 2048 / grpWidth;  // something something graphics card texture width limitation for Factorio?

  int newImgWidth = targetCellsPerRow * grpWidth;
  int newImgHeight = int(std::ceil(double(anim_parent.framedata.size()) / targetCellsPerRow)) * grpHeight;
  std::size_t imgDataSize = 4 * newImgWidth * newImgHeight;
  std::vector<std::uint8_t> newImg(imgDataSize, 0);

  for (int i = 0; i < anim_parent.framedata.size(); ++i) {
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

  img_info.frame_width = grpWidth;
  img_info.frame_height = grpHeight;
  img_info.line_length = targetCellsPerRow;
  img_info.frame_count = int(anim_parent.framedata.size());
}

void convert(const std::string& input, const std::string& output_dir) {
  // Load the anim file
  std::ifstream infile(input, std::ios::binary);
  anim anim_data = loadAnim(infile);

  // Create PNG file
  std::string out_file_prefix = (std::filesystem::path(output_dir) / std::filesystem::path(input).stem()).string();
  for (auto& anim_pair : anim_data.data) {
    dds_img_t& img = anim_pair.second;
    gfx_info_t result_info;

    swapRGB(img);
    toSpritesheet(anim_data, img, result_info);

    std::string outfile = out_file_prefix + "_" + anim_pair.first + ".png";
    int pngerr = lodepng_encode32_file(outfile.c_str(), img.data.data(), img.width, img.height);
    if (pngerr != 0) {
      std::cerr << "PNG err: " << pngerr << std::endl;
      throw std::exception("Failed to write PNG");
    }

    std::ofstream json(outfile + ".lua");
    json << "{\n"
      << "  filename = \"__starcraft__/graphics/" << std::filesystem::path(outfile).filename() << "\",\n"
      << "  size = {" << result_info.frame_width << ", " << result_info.frame_height << "},\n"
      << "  line_length = " << result_info.line_length << ",\n"
      << "  frame_count = " << result_info.frame_count << ",\n"
      << "  scale = 0.5\n"
      << "}\n";
  }
}

