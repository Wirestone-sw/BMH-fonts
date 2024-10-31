// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_italic_16

#include "font.h"
#include "tinos_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,192,32,32,96,224,128,127,255,128,128,192,124,31,3};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,192,224,32,128,128,248,255,143,128};
// '2'
static const uint8_t bitmap_50[] = {0,224,32,32,32,224,192,128,224,224,208,216,204,199,67,0};
// '3'
static const uint8_t bitmap_51[] = {0,224,32,32,32,224,192,128,128,128,132,132,206,123,59,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,224,224,56,52,51,49,252,255,51};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,96,96,96,96,96,224,194,131,130,130,198,126,60};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,96,32,32,32,224,127,255,130,130,194,126,60,0};
// '7'
static const uint8_t bitmap_55[] = {128,96,96,96,96,96,224,96,128,192,112,24,12,3,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,32,32,32,224,192,48,248,219,135,132,196,127,123,1};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,96,32,32,224,192,128,128,231,143,140,136,72,60,31,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,224,231,7,2};

static const uint8_t char_width[] = {8,6,8,8,7,8,8,8,9,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
