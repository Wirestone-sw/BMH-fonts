// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_16

#include "font.h"
#include "roboto_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,16,16,16,48,224,0,63,112,128,128,128,192,127,15};
// '1'
static const uint8_t bitmap_49[] = {64,64,32,224,240,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {224,96,16,16,16,48,224,0,128,224,176,152,140,134,131,128};
// '3'
static const uint8_t bitmap_51[] = {96,96,16,16,16,48,224,96,192,130,130,130,197,125};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,96,240,0,0,16,24,30,19,16,16,255,16,16};
// '5'
static const uint8_t bitmap_53[] = {0,240,48,16,16,16,16,16,32,99,193,129,129,195,126,60};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,48,16,16,0,0,63,127,195,129,129,195,126,60};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,16,144,240,16,0,128,224,56,14,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,16,16,16,48,224,0,56,109,130,130,130,199,125,16};
// '9'
static const uint8_t bitmap_57[] = {192,96,16,16,16,32,224,7,14,136,136,72,100,63};
// ':'
static const uint8_t bitmap_58[] = {128,128,193,193};

static const uint8_t char_width[] = {8,5,8,7,9,8,8,8,8,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
