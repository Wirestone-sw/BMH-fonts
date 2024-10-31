// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmsy10_20

#include "font.h"
#include "jsmath-cmsy10_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,224,224,96,240,127,15,3,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,120,140,2,3,3,3,6,14,220,120,248,236,134,2};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,64,64,64,64,64,64,64,124,147,17,16,16,16,16,16,16,16,16};
// '3'
static const uint8_t bitmap_51[] = {64,64,64,64,64,64,64,128,0,0,0,16,16,16,16,16,16,16,16,17,146,124};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,48,12,24,96,128,0,0,0,128,96,24,4,3,0,0,0,0,0,1,6,8};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,128,128,128,128,128,128,128,128,128,128,0,3,12,48,64,128,0,0,0,0,0,0,192,32};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,128,96,24,4,0,0,128,96,24,6,1,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,255,16};
// '8'
static const uint8_t bitmap_56[] = {24,96,128,0,0,0,0,0,0,0,224,24,0,0,3,29,97,129,1,225,25,7,0,0};
// '9'
static const uint8_t bitmap_57[] = {8,8,8,8,8,8,8,8,8,248,4,4,4,4,4,4,4,4,4,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,0,0,0,4,4,4,4,4,4,4,4,4,4,4,252};

static const uint8_t char_width[] = {5,14,11,11,14,14,10,2,12,10,12};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmsy10_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
