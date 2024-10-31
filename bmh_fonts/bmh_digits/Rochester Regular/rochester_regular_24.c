// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rochester_regular_24

#include "font.h"
#include "rochester_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,24,12,4,4,4,12,56,240,128,255,255,0,0,0,0,0,0,0,255,255,1,7,12,24,16,16,16,24,14,7,0};
// '1'
static const uint8_t bitmap_49[] = {32,32,48,248,252,0,0,0,0,0,0,255,255,0,0,0,16,16,16,31,31,16,16,16};
// '2'
static const uint8_t bitmap_50[] = {96,248,132,130,130,130,2,2,2,132,248,96,0,129,97,49,17,24,12,12,6,3,1,0,15,2,3,3,3,6,6,12,12,12,6,1};
// '3'
static const uint8_t bitmap_51[] = {0,0,120,68,66,2,2,130,198,126,28,0,192,224,16,0,4,6,5,5,12,56,248,224,3,7,6,8,8,8,8,8,4,6,3,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,240,124,12,0,0,96,32,56,12,70,67,128,128,254,254,128,0,0,0,0,0,0,0,0,31,31,0};
// '5'
static const uint8_t bitmap_53[] = {0,248,24,24,24,24,24,8,8,4,4,0,192,97,3,2,2,2,6,4,28,120,240,192,15,12,24,16,16,16,16,16,8,12,7,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,224,48,24,8,4,4,0,0,0,255,255,24,4,4,4,4,4,24,248,224,3,7,12,16,16,16,16,24,12,7,1};
// '7'
static const uint8_t bitmap_55[] = {24,12,12,12,12,8,152,120,24,8,4,0,0,0,224,252,7,0,0,0,0,0,0,0,0,31,31,24,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,56,252,194,130,130,2,130,68,56,0,0,240,24,4,5,3,3,7,6,14,60,248,224,3,6,12,8,8,8,8,8,8,6,3,0};
// '9'
static const uint8_t bitmap_57[] = {192,240,120,8,4,4,4,4,24,240,224,3,15,15,16,16,16,16,16,204,255,63,0,0,0,16,16,8,12,6,3,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,24,24,6,6};

static const uint8_t char_width[] = {11,8,12,12,11,12,11,11,12,11,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rochester_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
