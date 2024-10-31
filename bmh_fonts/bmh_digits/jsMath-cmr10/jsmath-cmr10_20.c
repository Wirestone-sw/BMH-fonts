// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmr10_20

#include "font.h"
#include "jsmath-cmr10_20.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,8,8,4,12,8,248,224,63,255,0,0,0,0,0,255,127};
// '1'
static const uint8_t bitmap_49[] = {16,16,16,248,252,0,0,0,0,0,0,255,255,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {48,120,52,4,4,12,252,248,240,128,192,240,216,204,198,195,225,48};
// '3'
static const uint8_t bitmap_51[] = {0,120,120,12,4,140,248,248,0,224,224,96,2,2,3,253,252,120};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,48,248,252,0,0,16,28,22,17,16,16,255,255,16,16};
// '5'
static const uint8_t bitmap_53[] = {4,248,24,24,24,24,8,12,0,96,247,35,1,1,1,255,254,56};
// '6'
static const uint8_t bitmap_54[] = {128,224,240,24,136,132,60,56,32,63,255,206,1,0,1,199,255,124};
// '7'
static const uint8_t bitmap_55[] = {96,60,24,24,24,24,216,120,24,8,0,0,0,248,254,7,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,248,204,140,4,12,140,248,0,120,252,7,3,7,7,14,254,120};
// '9'
static const uint8_t bitmap_57[] = {192,240,248,8,12,4,8,248,240,192,1,199,239,200,8,8,136,255,127,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,195,195};

static const uint8_t char_width[] = {9,8,9,9,10,9,9,10,9,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmr10_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
