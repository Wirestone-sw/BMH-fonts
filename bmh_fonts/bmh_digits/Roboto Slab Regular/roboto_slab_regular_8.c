// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_regular_8

#include "font.h"
#include "roboto_slab_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {248,4,4,248};
// '1'
static const uint8_t bitmap_49[] = {132,252,128};
// '2'
static const uint8_t bitmap_50[] = {8,132,100,24};
// '3'
static const uint8_t bitmap_51[] = {136,36,36,216};
// '4'
static const uint8_t bitmap_52[] = {128,240,136,252};
// '5'
static const uint8_t bitmap_53[] = {168,20,20,228};
// '6'
static const uint8_t bitmap_54[] = {96,156,20,228};
// '7'
static const uint8_t bitmap_55[] = {4,132,116,12};
// '8'
static const uint8_t bitmap_56[] = {216,36,36,216};
// '9'
static const uint8_t bitmap_57[] = {56,68,68,248};
// ':'
static const uint8_t bitmap_58[] = {32};

static const uint8_t char_width[] = {4,3,4,4,4,4,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
