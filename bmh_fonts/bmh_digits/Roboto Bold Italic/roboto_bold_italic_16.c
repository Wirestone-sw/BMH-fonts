// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_bold_italic_16

#include "font.h"
#include "roboto_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,240,24,24,24,248,240,63,127,96,96,112,62,31,7};
// '1'
static const uint8_t bitmap_49[] = {192,64,96,224,240,16,0,128,254,255,7,0};
// '2'
static const uint8_t bitmap_50[] = {0,128,224,240,48,48,112,240,224,192,224,240,248,220,206,199,195,1};
// '3'
static const uint8_t bitmap_51[] = {0,64,48,56,24,24,152,248,240,24,56,120,99,99,99,63,63,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,224,240,240,48,24,28,30,27,153,252,255,31,24};
// '5'
static const uint8_t bitmap_53[] = {0,224,240,48,48,48,48,48,16,114,243,195,195,195,127,126,28,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,96,112,48,48,0,127,127,199,195,195,127,127,28};
// '7'
static const uint8_t bitmap_55[] = {32,48,48,48,48,176,240,112,48,128,224,240,60,30,7,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,240,240,56,24,152,248,240,60,127,99,99,99,63,63,0};
// '9'
static const uint8_t bitmap_57[] = {192,240,240,24,24,56,240,224,1,103,103,118,54,31,15,3};
// ':'
static const uint8_t bitmap_58[] = {0,0,224,224,32,112,112,0};

static const uint8_t char_width[] = {8,6,9,9,9,9,8,9,8,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
