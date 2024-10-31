// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_thin_24

#include "font.h"
#include "roboto_thin_24.h"

// '0'
static const uint8_t bitmap_48[] = {224,24,6,2,1,1,1,1,2,6,120,128,63,192,0,0,0,0,0,0,0,0,240,15,0,0,3,2,4,4,4,4,2,3,0,0};
// '1'
static const uint8_t bitmap_49[] = {4,4,2,2,2,255,0,0,0,0,0,255,0,0,0,0,0,7};
// '2'
static const uint8_t bitmap_50[] = {56,4,2,3,1,1,1,1,2,134,120,0,0,0,0,128,64,32,24,4,2,1,0,0,0,6,5,4,4,4,4,4,4,4,4,4};
// '3'
static const uint8_t bitmap_51[] = {24,4,2,2,1,1,1,1,129,130,124,0,224,0,0,0,1,1,1,1,2,2,140,112,0,1,2,2,4,4,4,4,4,2,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,32,24,6,1,255,0,0,0,48,40,38,33,32,32,32,32,32,255,32,32,32,0,0,0,0,0,0,0,0,0,7,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,254,1,129,129,129,129,129,1,1,1,192,1,1,0,0,0,0,0,1,2,252,0,1,2,4,4,4,4,4,2,1,0};
// '6'
static const uint8_t bitmap_54[] = {224,24,4,130,130,129,129,129,1,0,0,255,1,1,0,0,0,0,0,1,134,120,0,3,2,4,4,4,4,4,2,1,0};
// '7'
static const uint8_t bitmap_55[] = {1,1,1,1,1,1,1,1,193,57,7,1,0,0,0,0,128,112,12,3,0,0,0,0,0,0,0,6,1,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {48,76,130,1,1,1,1,1,3,130,124,0,248,4,2,3,1,1,1,1,3,2,12,240,0,1,2,4,4,4,4,4,4,2,1,0};
// '9'
static const uint8_t bitmap_57[] = {240,12,2,3,1,1,1,1,2,6,120,128,1,6,8,16,16,16,16,16,8,140,126,3,0,0,0,4,4,4,6,2,1,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {64,0,4};

static const uint8_t char_width[] = {12,6,12,12,13,11,11,12,12,12,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_thin_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
