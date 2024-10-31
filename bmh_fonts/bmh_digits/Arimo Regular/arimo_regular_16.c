// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_regular_16

#include "font.h"
#include "arimo_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,96,16,16,16,96,192,63,96,128,128,128,96,63};
// '1'
static const uint8_t bitmap_49[] = {64,32,48,240,240,0,0,128,128,128,255,255,128,128};
// '2'
static const uint8_t bitmap_50[] = {96,112,16,16,16,240,224,192,240,152,136,132,131,129};
// '3'
static const uint8_t bitmap_51[] = {96,48,16,16,16,240,224,96,192,130,130,134,197,125};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,48,240,0,0,16,28,22,17,16,16,255,16,16};
// '5'
static const uint8_t bitmap_53[] = {240,240,16,16,16,16,16,67,195,129,129,129,99,126};
// '6'
static const uint8_t bitmap_54[] = {192,224,48,16,16,48,32,63,118,193,129,129,227,126};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,144,208,48,0,0,240,126,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {224,240,16,16,16,240,224,125,197,130,130,130,197,125};
// '9'
static const uint8_t bitmap_57[] = {224,112,16,16,48,96,192,103,206,136,136,200,102,63};
// ':'
static const uint8_t bitmap_58[] = {128,193};

static const uint8_t char_width[] = {7,7,7,7,9,7,7,7,7,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
