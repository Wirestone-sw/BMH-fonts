// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font unkempt_bold_16

#include "font.h"
#include "unkempt_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,224,32,48,16,16,48,96,192,128,2,31,48,96,64,192,192,64,96,48,31};
// '1'
static const uint8_t bitmap_49[] = {192,224,224,64,127,127};
// '2'
static const uint8_t bitmap_50[] = {128,192,96,96,96,96,192,0,193,224,176,152,136,134,227,192};
// '3'
static const uint8_t bitmap_51[] = {224,96,96,64,224,224,224,64,33,228,134,131,131,194,126,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,224,96,0,0,224,0,0,4,15,5,4,140,132,255,132,128};
// '5'
static const uint8_t bitmap_53[] = {192,224,96,96,96,96,224,0,79,199,134,134,130,134,237,120};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,64,96,32,32,0,0,0,30,127,204,130,2,131,130,134,252,56};
// '7'
static const uint8_t bitmap_55[] = {64,192,96,96,96,96,96,224,96,0,1,0,192,112,28,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,96,96,32,96,192,128,96,255,140,140,140,140,140,207,251};
// '9'
static const uint8_t bitmap_57[] = {128,224,48,48,16,48,48,224,192,3,7,12,140,204,108,52,31,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,72,108};

static const uint8_t char_width[] = {11,3,8,8,9,8,10,9,9,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t unkempt_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
