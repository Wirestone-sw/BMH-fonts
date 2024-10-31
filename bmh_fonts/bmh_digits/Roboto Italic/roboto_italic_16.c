// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_italic_16

#include "font.h"
#include "roboto_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,16,8,8,8,240,224,63,97,64,64,96,56,31,0};
// '1'
static const uint8_t bitmap_49[] = {64,96,32,224,112,0,128,252,31,0};
// '2'
static const uint8_t bitmap_50[] = {0,96,112,24,8,8,8,240,96,64,96,112,88,76,70,67,65,0};
// '3'
static const uint8_t bitmap_51[] = {0,64,48,24,8,8,136,240,64,16,48,64,65,65,97,62,28,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,176,240,16,16,24,22,19,17,240,127,19,16};
// '5'
static const uint8_t bitmap_53[] = {0,192,240,16,16,16,16,16,96,195,129,129,129,99,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,96,32,16,16,16,126,231,129,129,129,99,62};
// '7'
static const uint8_t bitmap_55[] = {0,16,16,16,16,144,208,48,16,128,192,112,24,14,3,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,240,152,8,8,136,240,96,16,62,98,65,65,97,63,28,0};
// '9'
static const uint8_t bitmap_57[] = {192,240,24,8,8,24,240,1,71,68,36,52,30,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,192,193,1};

static const uint8_t char_width[] = {8,5,9,9,9,8,7,9,9,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
