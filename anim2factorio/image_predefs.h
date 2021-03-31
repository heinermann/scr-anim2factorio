#pragma once
#include <array>

struct imagedat_info_t {
  bool draw_as_glow;
  bool draw_as_shadow;
  bool gfx_turns;
};

extern std::array<imagedat_info_t, 999> image_predefs;
