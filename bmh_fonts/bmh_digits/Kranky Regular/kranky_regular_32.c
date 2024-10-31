// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font kranky_regular_32

#include "font.h"
#include "kranky_regular_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,96,240,48,24,8,8,8,8,8,24,16,16,48,32,192,128,0,0,252,6,1,192,255,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,254,224,63,224,128,11,255,128,0,0,0,0,0,0,0,0,0,0,0,0,0,224,31,0,0,0,1,3,2,7,14,8,16,16,16,16,16,24,8,8,4,6,3,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,64,32,240,16,248,0,0,0,0,0,0,0,248,15,0,255,0,0,0,0,0,0,0,255,0,0,255,0,0,0,16,16,16,31,31,8,24,23,30,16,16};
// '2'
static const uint8_t bitmap_50[] = {128,96,48,24,8,8,12,4,4,12,252,8,48,224,0,1,0,0,0,0,0,0,0,0,192,255,96,48,31,3,128,112,24,12,4,2,2,3,1,0,0,0,0,128,0,31,16,24,24,8,24,24,8,8,8,8,24,24,31,0};
// '3'
static const uint8_t bitmap_51[] = {144,120,8,8,8,8,8,8,8,200,120,24,200,104,24,8,0,0,0,0,0,192,224,88,76,99,89,70,67,192,128,0,0,0,0,192,0,0,0,0,0,0,0,0,0,0,0,0,129,126,16,0,1,7,4,8,8,24,16,8,8,8,4,2,2,1,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,192,96,48,200,100,254,32,0,0,0,128,64,32,16,136,68,50,25,12,6,3,0,0,255,0,0,0,0,4,4,6,5,4,6,4,2,2,6,4,6,6,255,6,6,6,6,0,0,0,0,0,0,0,0,0,0,0,8,8,15,8,24,24,0};
// '5'
static const uint8_t bitmap_53[] = {16,248,16,240,16,16,16,16,16,16,16,16,16,248,0,224,63,128,255,64,64,64,64,64,64,192,128,0,3,0,131,3,1,0,0,0,0,0,0,0,0,1,3,220,48,1,3,4,8,24,16,16,16,16,8,8,4,2,1,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,64,32,48,16,24,8,8,8,8,8,0,0,0,224,60,135,193,96,32,32,16,16,16,32,32,96,192,192,128,0,31,119,193,0,0,0,0,0,0,0,0,0,0,255,0,131,254,0,0,1,3,2,4,4,12,8,8,8,8,14,7,2,1,0};
// '7'
static const uint8_t bitmap_55[] = {160,240,48,32,32,32,32,32,32,32,32,160,96,32,160,224,48,16,1,0,0,0,0,0,0,192,48,12,195,48,12,6,1,0,0,0,0,0,0,0,224,56,7,224,56,7,1,0,0,0,0,0,0,0,0,16,16,14,15,8,30,11,8,8,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,192,96,224,48,16,8,8,8,8,24,16,240,16,32,192,0,0,0,0,0,31,48,206,253,192,128,128,128,128,128,64,64,255,231,152,15,0,0,224,56,12,242,255,3,1,0,0,0,0,0,0,0,0,0,3,255,3,2,252,3,6,12,25,23,24,48,32,32,32,32,32,48,16,16,28,15,9,4,6,1};
// '9'
static const uint8_t bitmap_57[] = {0,192,32,240,48,24,8,8,8,8,8,8,16,48,224,128,0,63,224,0,255,128,0,0,0,0,0,0,0,0,0,128,195,254,0,0,3,2,7,6,4,12,4,4,6,2,194,97,49,12,3,0,0,0,8,24,8,8,4,4,2,3,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,28,52,36,28,14,26,11,14};

static const uint8_t char_width[] = {22,11,15,17,18,15,17,18,21,17,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t kranky_regular_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
