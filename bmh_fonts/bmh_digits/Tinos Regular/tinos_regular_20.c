// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_regular_20

#include "font.h"
#include "tinos_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,64,64,64,192,128,0,254,255,0,0,0,0,0,255,254};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,192,192,0,0,0,1,1,0,255,255,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {192,192,64,64,64,64,192,128,0,1,0,0,128,192,96,63,31,0};
// '3'
static const uint8_t bitmap_51[] = {192,192,64,64,64,64,192,128,0,1,0,0,16,16,16,47,239,192};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,192,0,0,128,192,160,152,140,130,129,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,192,192,192,192,192,192,192,0,0,31,16,16,16,16,48,224,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,64,64,64,192,0,252,255,33,16,16,16,16,240,225};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,192,1,0,0,0,192,112,28,7,1};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,64,64,64,192,128,0,199,239,56,16,16,16,56,239,199};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,64,64,64,192,128,0,31,31,48,32,32,32,32,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,28,28};

static const uint8_t char_width[] = {9,8,9,9,11,9,9,9,9,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
