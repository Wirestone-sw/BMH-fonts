// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_italic_20

#include "font.h"
#include "tinos_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,64,64,64,192,128,0,248,254,7,0,0,0,0,224,255,31};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,128,128,192,0,0,0,1,1,252,127,3,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,192,64,64,64,64,192,128,0,0,1,0,128,128,64,32,28,15};
// '3'
static const uint8_t bitmap_51[] = {0,0,192,64,64,64,64,192,128,0,1,0,16,16,16,104,239,135};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,192,192,128,192,160,152,140,134,131,252,191,129};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,192,192,192,192,192,192,192,0,0,14,9,8,8,8,24,240,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,64,64,64,64,192,248,254,39,17,16,16,16,240,224,1};
// '7'
static const uint8_t bitmap_55[] = {0,192,192,192,192,192,192,192,192,64,1,0,128,192,48,24,4,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,192,64,64,64,64,192,128,0,192,103,47,24,16,16,48,232,207,3};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,64,64,64,64,192,128,0,14,31,49,32,32,32,32,240,255,30};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,12,12};

static const uint8_t char_width[] = {10,8,10,9,10,10,10,10,11,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
