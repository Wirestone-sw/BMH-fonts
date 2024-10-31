// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_light_24

#include "font.h"
#include "roboto_light_24.h"

// '0'
static const uint8_t bitmap_48[] = {224,252,6,2,1,1,1,1,2,6,252,192,63,255,0,0,0,0,0,0,0,128,255,63,0,1,3,2,4,4,4,4,2,3,1,0};
// '1'
static const uint8_t bitmap_49[] = {4,4,2,2,2,255,255,0,0,0,0,0,255,255,0,0,0,0,0,7,7};
// '2'
static const uint8_t bitmap_50[] = {24,28,6,3,1,1,1,1,2,206,252,0,0,0,0,128,224,48,24,12,7,1,0,0,0,6,7,5,4,4,4,4,4,4,4,4};
// '3'
static const uint8_t bitmap_51[] = {16,28,6,3,1,1,1,1,2,134,252,0,192,192,0,0,2,2,2,2,5,13,248,96,0,1,3,6,4,4,4,4,6,3,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,112,24,14,3,255,0,0,0,48,56,46,35,33,32,32,32,32,255,32,32,32,0,0,0,0,0,0,0,0,0,7,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,255,15,129,129,129,129,129,1,1,1,192,129,1,0,0,0,0,1,3,238,252,0,3,2,4,4,4,4,4,2,3,0};
// '6'
static const uint8_t bitmap_54[] = {0,224,56,12,134,130,131,129,129,0,0,0,30,255,130,1,0,0,0,0,1,3,254,124,0,0,3,2,4,4,4,4,6,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {1,1,1,1,1,1,1,1,193,121,15,3,0,0,0,0,128,240,60,7,1,0,0,0,0,0,0,6,3,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,252,134,3,1,1,1,1,3,134,252,0,240,248,13,5,2,2,2,2,5,13,248,240,0,1,2,6,4,4,4,4,6,2,1,0};
// '9'
static const uint8_t bitmap_57[] = {240,252,6,3,1,1,1,1,2,14,248,192,1,7,12,24,16,16,16,16,8,196,127,3,0,0,0,4,4,4,2,2,1,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {96,96,0,0,6,6};

static const uint8_t char_width[] = {12,7,12,12,13,11,12,12,12,12,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_light_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
