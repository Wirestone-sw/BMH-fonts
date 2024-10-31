// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmmi10_20

#include "font.h"
#include "jsmath-cmmi10_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,64,64,64,192,128,0,63,127,128,128,128,128,128,255,127};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,128,0,0,0,1,1,1,255,255,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {128,192,64,64,64,192,192,128,0,193,193,224,240,208,200,207,199,103};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,128,128,128,128,0,0,0,6,15,36,32,96,255,143,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,128,0,0,128,192,96,24,12,2,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,192,128,128,128,192,64,0,0,63,17,25,9,25,240,224,192};
// '6'
static const uint8_t bitmap_54[] = {224,248,156,70,66,66,222,158,8,31,127,99,128,128,128,225,127,31};
// '7'
static const uint8_t bitmap_55[] = {0,128,0,0,0,0,0,0,0,0,12,7,3,3,195,227,27,15,3,1};
// '8'
static const uint8_t bitmap_56[] = {32,248,140,140,4,12,140,248,0,120,252,7,3,7,7,14,252,120};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,0,0,126,255,129,0,0,195,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192};

static const uint8_t char_width[] = {9,8,9,9,10,9,9,10,9,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmmi10_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
