#pragma once
#include <cstdint>
#include <iostream>
#include <vector>
#include <map>

// Copy of struct from lib
struct dds_img_t {
  std::vector<uint8_t> data;
  int width, height, bpp;
};

// ----- .anim File Data -----
typedef struct {
  std::uint32_t filetype;  // 0x4D494E41, "ANIM"
  std::uint16_t version;   // SD = 0x0101, HD2 = 0x0202, HD = 0x0204
  std::uint16_t unk2;      // null? more bytes for version?
  std::uint16_t layers;
  std::uint16_t entries;   // 999
  char layernames[10][32];
  // int entryptrs[entries] // for version 0x0101, pointers to anim_entry/anim_ref's
} anim_header;

typedef struct {
  std::uint32_t ptr;
  std::uint32_t size;
  std::uint16_t texWidth; // width/height of texture image
  std::uint16_t texHeight;
} anim_img;

typedef struct {
  std::uint16_t frames; // if == 0 use anim_ref

  std::uint16_t unk2; // 0xFFFF?
  std::uint16_t grpWidth;  // width/height of whole GRP frame -- 0 in SD images, to be retrieved from existing GRP's?
  std::uint16_t grpHeight;

  std::uint32_t frameptr; // pointer to frame data

  anim_img imgs[10]; // 1 per layer in the header
} anim_entry;

typedef struct {
  std::uint16_t frames; // if != 0 use anim_entry

  std::uint16_t refid; // image ID to refer to
  std::uint32_t unk0;
  std::uint32_t unk1; // always 0?
  std::uint16_t unk2; // who knows
} anim_ref;

typedef struct {
  std::uint16_t x;
  std::uint16_t y;
  std::int16_t xoffs;
  std::int16_t yoffs;
  std::uint16_t width;
  std::uint16_t height;
  std::uint16_t unk1; // 0?
  std::uint16_t unk2; // 0?
} frame;



// ----- anim memory data -----

#define ANIM_TEX_COUNT 2

typedef struct {
  std::uint32_t width;      // grp width
  std::uint32_t height;     // grp height

  std::map<std::string, dds_img_t> data;

  std::vector<frame> framedata;
} anim;

anim loadAnim(std::istream& is);
