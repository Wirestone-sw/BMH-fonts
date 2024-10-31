// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font kranky_regular_8

#include "font.h"
#include "kranky_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {112,140,132,132,248};
// '1'
static const uint8_t bitmap_49[] = {252,128};
// '2'
static const uint8_t bitmap_50[] = {114,82,78};
// '3'
static const uint8_t bitmap_51[] = {164,156,228};
// '4'
static const uint8_t bitmap_52[] = {28,22,126};
// '5'
static const uint8_t bitmap_53[] = {92,148,148,236};
// '6'
static const uint8_t bitmap_54[] = {120,148,148,224};
// '7'
static const uint8_t bitmap_55[] = {196,180,12};
// '8'
static const uint8_t bitmap_56[] = {96,156,148,148,232};
// '9'
static const uint8_t bitmap_57[] = {24,164,164,120};
// ':'
static const uint8_t bitmap_58[] = {96};

static const uint8_t char_width[] = {5,2,3,3,3,4,4,3,5,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t kranky_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
