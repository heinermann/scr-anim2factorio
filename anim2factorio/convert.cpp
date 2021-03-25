#include "convert.h"

#include <string>
#include <filesystem>
#include <fstream>
#include <algorithm>

#include "anim.h"

#include "../lodepng/lodepng.h"

void swapRGB(dds_img_t& img) {
  for (int i = 0; i < img.data.size(); i += 4) {
    std::swap(img.data[i], img.data[i + 2]);
  }
}

void convert(const std::string& input, const std::string& output_dir) {
  std::ifstream infile(input, std::ios::binary);
  anim anim_data = loadAnim(infile);

  // TODO: Remake into proper spaced out factorio-compatible buffers

  std::string out_file_prefix = (std::filesystem::path(output_dir) / std::filesystem::path(input).stem()).string();

  for (auto& anim_pair : anim_data.data) {
    dds_img_t& img = anim_pair.second;
    swapRGB(img);

    std::string outfile = out_file_prefix + "_" + anim_pair.first + ".png";
    lodepng_encode32_file(outfile.c_str(), img.data.data(), img.width, img.height);
  }
}

