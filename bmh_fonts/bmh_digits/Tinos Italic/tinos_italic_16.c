// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_italic_16

#include "font.h"
#include "tinos_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,64,32,32,32,224,128,127,131,128,128,128,96,63,7};
// '1'
static const uint8_t bitmap_49[] = {0,0,64,64,224,128,128,192,255,131};
// '2'
static const uint8_t bitmap_50[] = {0,0,96,32,32,32,32,224,128,128,192,160,144,144,136,132,3,0};
// '3'
static const uint8_t bitmap_51[] = {0,96,32,32,32,32,192,128,128,132,132,132,122,57};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,64,224,224,16,24,20,18,17,248,31,16};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,32,32,32,32,32,224,128,131,130,130,130,126,60};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,32,32,32,32,96,126,197,130,130,130,66,60,0};
// '7'
static const uint8_t bitmap_55[] = {0,224,32,32,32,32,160,96,128,192,32,24,4,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,96,32,32,32,224,192,32,248,139,134,132,132,78,123,1};
// '9'
static const uint8_t bitmap_57[] = {128,192,32,32,32,32,192,128,199,143,136,136,72,104,31,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,192,192,3};

static const uint8_t char_width[] = {8,5,9,7,8,8,8,8,9,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
