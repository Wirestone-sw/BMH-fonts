// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crushed_regular_24

#include "font.h"
#include "crushed_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {240,252,14,3,3,3,14,252,248,127,255,128,0,0,0,128,255,127,0,1,3,3,2,3,3,1,0};
// '1'
static const uint8_t bitmap_49[] = {2,2,255,255,0,0,255,255,0,0,3,3};
// '2'
static const uint8_t bitmap_50[] = {6,2,3,3,3,6,254,252,0,128,192,96,56,30,7,1,3,3,3,3,3,3,3,3};
// '3'
static const uint8_t bitmap_51[] = {0,6,3,3,131,131,254,124,0,128,0,0,1,3,2,142,252,120,3,3,2,2,2,3,3,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,128,224,56,14,255,255,7,0,14,11,8,8,8,255,255,200,8,0,0,0,0,0,1,1,1,0};
// '5'
static const uint8_t bitmap_53[] = {255,255,193,193,193,129,129,0,192,0,0,0,128,193,255,126,1,1,1,1,1,1,0,0};
// '6'
static const uint8_t bitmap_54[] = {224,248,158,134,131,131,3,6,0,127,255,129,1,1,1,131,255,124,0,1,3,3,2,2,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {1,1,1,1,193,249,31,3,0,0,224,254,127,1,0,0,0,0,1,1,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {56,254,198,3,3,131,254,124,16,252,254,2,3,1,3,134,252,248,0,1,3,2,2,2,3,1,0};
// '9'
static const uint8_t bitmap_57[] = {252,254,6,3,3,3,30,252,224,1,7,6,4,4,132,246,127,31,0,3,2,2,3,3,1,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,128,0,3,3,1,3,3,3};

static const uint8_t char_width[] = {9,4,8,9,9,8,9,8,9,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crushed_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
