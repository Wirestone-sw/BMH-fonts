// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmti10_32

#include "font.h"
#include "jsmath-cmti10_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,224,248,254,63,7,1,0,0,0,0,192,255,255,255,248,255,255,63,3,0,0,0,0,0,192,252,255,127,15,1,7,15,31,56,48,48,48,24,24,14,15,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,24,24,24,216,252,254,255,7,0,0,0,0,0,192,252,255,127,15,0,0,48,48,48,48,60,63,63,55,48,48,48,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,240,120,14,7,235,121,1,0,1,193,255,254,252,0,0,1,3,130,194,195,97,112,56,28,30,15,7,3,0,112,124,30,31,27,25,56,120,112,112,112,120,56,30,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,120,124,70,107,57,1,1,1,129,225,255,255,60,0,128,128,0,0,0,6,6,6,142,255,255,227,1,0,0,31,63,99,97,96,96,96,48,56,31,15,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,128,224,254,127,31,3,0,0,0,0,0,128,224,240,60,31,199,193,192,0,0,48,56,28,30,31,51,49,48,240,255,255,127,97,96,64,0,0,0,0,0,0,0,31,31,15,1,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,192,252,191,131,195,195,195,131,131,1,1,128,192,196,199,3,1,0,0,0,192,255,255,255,0,15,31,57,48,48,48,24,28,14,15,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,224,240,248,60,142,135,131,129,129,29,31,31,14,224,254,255,255,31,2,1,1,0,128,249,255,255,124,0,0,7,31,63,112,96,96,96,112,60,31,15,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {96,120,62,15,15,7,7,3,3,7,142,232,252,62,15,3,1,0,0,0,0,0,0,192,240,252,255,31,3,0,0,0,0,0,0,0,0,0,112,126,127,63,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,224,248,254,199,131,1,1,0,193,227,255,62,0,128,224,240,56,27,15,7,15,31,63,255,253,240,0,0,6,31,63,120,112,96,96,96,48,48,24,31,15,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,192,240,252,254,14,3,1,1,0,129,255,255,254,0,0,31,63,127,96,96,96,32,176,252,255,255,63,7,60,126,126,100,96,96,48,56,28,15,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,192,192,192,128,0,0,3,7,7,3,1,30,30,31,14,0,0,0,0,0,0,0,0,0,0};

static const uint8_t char_width[] = {16,12,16,16,15,14,16,17,16,15,7};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmti10_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
