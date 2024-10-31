// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_regular_24

#include "font.h"
#include "tinos_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {224,248,60,6,2,2,2,6,60,248,224,63,255,224,0,0,0,0,0,240,255,63,0,0,1,3,2,2,2,3,1,0,0};
// '1'
static const uint8_t bitmap_49[] = {8,8,4,4,254,254,0,0,0,0,0,0,0,255,255,0,0,0,2,2,2,2,3,3,2,2,2};
// '2'
static const uint8_t bitmap_50[] = {0,30,6,2,2,2,2,14,252,248,0,0,128,64,96,48,24,12,7,3,0,0,3,3,3,3,3,3,3,3,3,3,3};
// '3'
static const uint8_t bitmap_51[] = {0,30,6,2,2,2,2,134,252,248,0,192,0,0,2,2,2,3,5,141,252,248,3,3,2,2,2,2,2,3,1,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,96,48,24,254,254,0,0,0,48,56,52,51,49,48,48,48,255,255,48,48,48,0,0,0,0,0,0,0,0,3,3,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {254,6,6,6,6,6,6,6,6,0,193,1,1,1,1,1,3,198,254,124,3,2,2,2,2,2,3,1,1,0};
// '6'
static const uint8_t bitmap_54[] = {192,240,248,12,6,2,2,2,2,14,0,31,255,242,2,1,1,1,3,135,254,252,0,0,1,1,2,2,2,2,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {30,6,6,6,6,6,134,230,62,14,0,0,128,224,56,14,3,0,0,0,0,2,3,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,252,252,134,2,2,2,134,252,252,0,248,254,134,3,1,1,1,3,134,254,248,0,1,3,2,2,2,2,3,3,1,0};
// '9'
static const uint8_t bitmap_57[] = {248,252,12,6,2,2,2,6,124,248,224,129,3,7,6,4,4,4,130,250,127,31,0,3,2,2,2,2,3,1,1,0,0};
// ':'
static const uint8_t bitmap_58[] = {192,192,128,129,129,0,3,3,1};

static const uint8_t char_width[] = {11,9,11,11,13,10,11,10,11,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
