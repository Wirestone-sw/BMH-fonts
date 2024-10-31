// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_16

#include "font.h"
#include "roboto_condensed_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,112,16,16,48,224,63,224,128,128,192,127};
// '1'
static const uint8_t bitmap_49[] = {64,32,32,240,0,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {224,48,16,16,48,224,0,192,224,176,156,134,131,128};
// '3'
static const uint8_t bitmap_51[] = {96,48,16,16,240,224,96,192,130,130,197,125};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,112,240,0,0,16,28,23,17,16,255,16,16};
// '5'
static const uint8_t bitmap_53[] = {0,240,16,16,16,16,0,32,99,129,129,131,126,60};
// '6'
static const uint8_t bitmap_54[] = {128,224,48,16,16,0,63,98,129,129,195,126};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,144,240,16,0,128,240,30,7,0,0};
// '8'
static const uint8_t bitmap_56[] = {224,240,16,16,48,224,125,199,130,130,199,125};
// '9'
static const uint8_t bitmap_57[] = {224,48,16,16,96,192,7,140,136,200,116,31};
// ':'
static const uint8_t bitmap_58[] = {128,128,193,193};

static const uint8_t char_width[] = {6,4,7,6,8,7,6,7,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
