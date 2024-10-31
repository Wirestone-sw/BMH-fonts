// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmr10_16

#include "font.h"
#include "jsmath-cmr10_16.h"

// '0'
static const uint8_t bitmap_48[] = {248,254,2,2,2,254,252,3,15,8,16,8,15,7};
// '1'
static const uint8_t bitmap_49[] = {8,8,248,252,0,0,16,16,31,31,16,16};
// '2'
static const uint8_t bitmap_50[] = {24,28,2,6,204,124,48,24,28,26,25,24,28,2};
// '3'
static const uint8_t bitmap_51[] = {12,14,66,98,254,156,0,6,14,8,8,12,15,3};
// '4'
static const uint8_t bitmap_52[] = {0,192,48,16,252,254,0,3,2,18,18,31,31,18};
// '5'
static const uint8_t bitmap_53[] = {0,126,38,38,38,226,194,2,15,8,8,8,15,7};
// '6'
static const uint8_t bitmap_54[] = {248,252,34,34,38,238,128,7,15,8,8,8,7,3};
// '7'
static const uint8_t bitmap_55[] = {60,12,12,140,108,28,12,0,0,62,31,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {56,100,228,196,196,56,0,14,17,48,48,17,31,14};
// '9'
static const uint8_t bitmap_57[] = {124,254,130,2,130,254,248,0,14,13,9,8,7,1};
// ':'
static const uint8_t bitmap_58[] = {32,96,12,12};

static const uint8_t char_width[] = {7,6,7,7,7,7,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmr10_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
