// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font montez_regular_24

#include "font.h"
#include "montez_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {224,56,4,58,4,4,4,12,120,240,0,127,224,0,0,0,0,0,0,128,127,7,0,1,3,2,2,2,2,2,1,0,0};
// '1'
static const uint8_t bitmap_49[] = {128,96,56,254,30,0,0,0,0,0,255,0,0,0,3,2,2,3,2,2,1};
// '2'
static const uint8_t bitmap_50[] = {224,216,132,6,6,6,14,28,248,0,0,1,1,0,128,64,32,24,7,0,0,2,3,3,3,2,2,2,2,2};
// '3'
static const uint8_t bitmap_51[] = {48,236,194,1,1,3,3,142,252,0,0,224,16,4,6,6,249,240,0,0,1,1,2,0,1,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,224,252,8,0,248,62,2,16,48,60,51,32,32,32,255,16,16,0,0,0,0,0,0,0,3,4,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,252,142,132,132,4,4,2,2,64,248,1,0,0,1,1,3,254,252,0,1,3,2,2,2,2,2,1,0};
// '6'
static const uint8_t bitmap_54[] = {192,240,152,68,66,65,65,128,0,0,63,255,128,0,0,0,0,193,127,28,0,0,1,1,1,1,1,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {4,4,4,4,196,52,14,2,0,224,252,15,0,0,0,0,0,3,7,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {96,248,132,2,2,2,2,6,12,248,0,1,227,22,14,12,28,114,227,1,0,0,1,2,2,2,2,2,1,0};
// '9'
static const uint8_t bitmap_57[] = {248,28,4,2,2,2,4,252,240,128,7,14,8,16,16,8,196,123,31,1,0,0,4,2,2,1,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,140,140,1,1};

static const uint8_t char_width[] = {11,7,10,9,10,10,10,8,10,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t montez_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
