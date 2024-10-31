// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font kranky_regular_20

#include "font.h"
#include "kranky_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,192,32,32,32,32,32,64,64,128,0,248,6,1,255,0,0,0,0,0,0,0,0,1,254};
// '1'
static const uint8_t bitmap_49[] = {0,0,32,224,240,0,0,0,0,128,127,63,192,0};
// '2'
static const uint8_t bitmap_50[] = {192,32,32,16,16,16,240,32,192,1,128,64,32,32,16,31,8,7};
// '3'
static const uint8_t bitmap_51[] = {192,32,32,32,32,32,160,96,160,96,0,1,0,0,48,28,26,21,19,32,96,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,64,160,88,248,0,0,40,36,58,37,34,33,32,32,255,32,32};
// '5'
static const uint8_t bitmap_53[] = {64,176,240,16,16,16,16,16,240,0,30,17,15,4,4,4,8,24,32,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,64,64,32,32,32,0,0,252,51,16,8,8,8,8,16,240,224};
// '7'
static const uint8_t bitmap_55[] = {192,32,64,64,64,64,64,192,64,192,64,0,0,0,128,112,204,51,12,2,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,96,224,16,16,16,16,16,240,16,224,0,192,35,244,31,8,8,8,8,4,15,250,17,224};
// '9'
static const uint8_t bitmap_57[] = {128,64,192,32,32,32,32,64,192,0,0,63,79,112,128,128,128,64,64,32,211,60};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,128};

static const uint8_t char_width[] = {14,7,9,11,11,10,10,11,13,11,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t kranky_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
