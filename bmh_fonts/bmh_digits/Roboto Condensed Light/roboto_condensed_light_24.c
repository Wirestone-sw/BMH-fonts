// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_light_24

#include "font.h"
#include "roboto_condensed_light_24.h"

// '0'
static const uint8_t bitmap_48[] = {248,14,3,1,1,1,3,14,248,255,128,0,0,0,0,0,128,255,0,3,6,4,4,4,6,3,0};
// '1'
static const uint8_t bitmap_49[] = {4,6,2,2,255,255,0,0,0,0,255,255,0,0,0,0,7,7};
// '2'
static const uint8_t bitmap_50[] = {28,6,3,1,1,1,3,254,120,0,0,0,192,96,56,12,7,1,0,0,6,7,5,4,4,4,4,4,4,4};
// '3'
static const uint8_t bitmap_51[] = {0,28,6,3,1,1,1,3,206,120,64,192,0,0,2,2,2,5,13,248,0,1,3,6,4,4,4,6,3,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,96,56,14,255,255,0,0,48,60,38,33,32,32,32,255,255,32,32,0,0,0,0,0,0,0,7,7,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,255,15,129,129,129,129,1,1,0,192,195,1,0,0,0,1,3,254,120,0,1,2,4,4,4,4,3,1,0};
// '6'
static const uint8_t bitmap_54[] = {224,120,12,134,131,129,129,0,0,255,130,1,0,0,0,1,3,254,0,1,2,4,4,4,6,3,1};
// '7'
static const uint8_t bitmap_55[] = {1,1,1,1,1,1,129,225,61,7,0,0,0,0,224,60,7,1,0,0,0,0,4,7,1,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {252,206,3,1,1,1,3,206,124,248,13,7,2,2,2,7,13,248,1,3,6,4,4,4,6,3,1};
// '9'
static const uint8_t bitmap_57[] = {96,252,6,3,1,1,1,2,28,248,0,3,6,12,8,8,8,4,231,63,0,0,0,4,4,6,2,1,0,0};
// ':'
static const uint8_t bitmap_58[] = {96,96,0,0,6,6};

static const uint8_t char_width[] = {9,6,10,10,11,10,9,10,9,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_light_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
