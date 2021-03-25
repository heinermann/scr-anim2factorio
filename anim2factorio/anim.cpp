#include "anim.h"

#include <stdexcept>

#include "../simple-dds-image-reader/ddsreader.hpp"

#define TEST(x) if(!(x)) throw std::exception(#x)

constexpr uint32_t MAKEFOURCC(char a, char b, char c, char d) {
  return a | (b << 8) | (c << 16) | (d << 24);
}

constexpr std::uint32_t ANIM_HDR = MAKEFOURCC('A','N','I','M');

template <typename T>
std::istream& read(std::istream& is, T& data) {
  return is.read(reinterpret_cast<char*>(&data), sizeof(T));
}

anim loadAnim(std::istream& is) {
  static std::vector<std::uint8_t> dds_work_buffer;

  if (!is.binary) throw std::invalid_argument("Input stream must be binary");

  anim result;
  anim_header header;
  anim_entry entry;

  TEST(read(is, header));

  TEST(header.filetype == ANIM_HDR);
  TEST(header.version != 0x0101);
  TEST(header.entries == 1);

  TEST(read(is, entry));
  TEST(entry.frames > 0);

  result.width = entry.grpWidth;
  result.height = entry.grpHeight;

  std::uint16_t texw = entry.imgs[0].texWidth;
  std::uint16_t texh = entry.imgs[0].texHeight;

  // Load DDS files
  for (int i = 0; i < header.layers; ++i) {
    anim_img& img = entry.imgs[i];
    if (img.ptr == 0) continue;

    if (img.texWidth != texw || img.texHeight != texh) {
      std::cerr << "Warning: Texture size mismatch: " << header.layernames[i] << std::endl;
    }

    TEST(is.seekg(img.ptr));

    dds_work_buffer.clear();
    dds_work_buffer.resize(img.size);
    TEST(is.read(reinterpret_cast<char*>(dds_work_buffer.data()), dds_work_buffer.size()));

    Image dds = read_dds(dds_work_buffer);
    dds_img_t dds2{ {}, dds.width, dds.height, dds.bpp };
    dds2.data.swap(dds.data); // avoid copy

    result.data.emplace(header.layernames[i], dds2);
  }

  // Load frame data
  result.framedata.reserve(entry.frames);
  TEST(is.seekg(entry.frameptr));
  for (int i = 0; i < entry.frames; ++i) {
    frame frameentry;
    TEST(read(is, frameentry));
    result.framedata.push_back(frameentry);
  }
  return result;
}
