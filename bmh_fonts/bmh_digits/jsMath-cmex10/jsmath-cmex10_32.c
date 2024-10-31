// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmex10_32

#include "font.h"
#include "jsmath-cmex10_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,128,192,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,192,0,0,0,0,0,0,0,1,7,30,124,240,224,128};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,192,192,192,192,192,192,192,192,192,192,192,255,255,255,1,1,1,1,1,1,1,1,1};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,192,192,192,192,192,192,192,192,192,192,1,1,1,1,1,1,1,1,255,255,255};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,192,192,255,255,255};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,192,192,192,255,255,255};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,128,128,128,255,255,255};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,128,128,128,255,255,255};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,192,240,248,252,62,14,7,3};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,128,0,0,0,0,0,0,0,1,3,7,15,62,252,248,240,192};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,128,128,128,128,255,255,255,255};

static const uint8_t char_width[] = {3,8,12,11,3,3,3,3,8,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmex10_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
