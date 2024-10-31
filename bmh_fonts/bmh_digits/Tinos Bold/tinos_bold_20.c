// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_20

#include "font.h"
#include "tinos_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,192,64,192,192,128,0,254,255,255,0,0,0,255,255,254};
// '1'
static const uint8_t bitmap_49[] = {0,128,128,192,192,0,0,0,1,0,255,255,255,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {192,192,64,64,64,192,192,128,0,3,1,128,192,224,120,63,31,7};
// '3'
static const uint8_t bitmap_51[] = {192,192,64,64,64,192,192,128,0,3,1,16,16,48,63,239,239,195};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,192,192,0,0,128,192,176,152,134,131,255,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,192,192,192,192,192,192,192,0,0,63,16,16,16,48,240,224,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,64,64,64,192,0,254,255,255,9,8,24,248,243,240};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,192,3,1,0,0,192,240,60,7,1};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,192,64,192,192,128,0,199,239,255,16,16,48,255,239,199};
// '9'
static const uint8_t bitmap_57[] = {128,128,192,64,64,192,192,128,0,31,63,63,48,32,32,255,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,60,60,60};

static const uint8_t char_width[] = {9,8,9,9,11,9,9,9,9,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
