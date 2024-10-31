// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_italic_20

#include "font.h"
#include "tinos_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,192,64,192,192,128,0,248,254,63,3,0,0,192,255,255,14};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,192,192,0,0,0,1,240,255,255,15,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,192,64,64,64,192,192,128,0,3,129,192,224,112,61,31,15};
// '3'
static const uint8_t bitmap_51[] = {0,128,192,64,64,64,192,192,128,0,3,1,16,48,56,239,239,135};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,192,192,176,152,140,134,243,255,255,131};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,192,192,192,192,192,192,192,0,0,62,23,16,16,48,240,224,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,64,64,64,192,192,248,254,255,11,8,24,248,248,243,3};
// '7'
static const uint8_t bitmap_55[] = {0,192,192,192,192,192,192,192,192,192,64,0,3,0,128,224,112,56,14,3,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,192,192,64,64,192,128,0,128,192,231,127,31,16,16,248,239,207,3};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,192,64,64,192,128,128,0,0,14,31,63,48,32,32,208,255,255,28};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,8,28,28,8};

static const uint8_t char_width[] = {10,8,9,9,9,10,10,11,11,11,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
