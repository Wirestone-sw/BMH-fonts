// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_regular_16

#include "font.h"
#include "tinos_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,64,32,32,32,192,128,63,64,128,128,128,96,63};
// '1'
static const uint8_t bitmap_49[] = {64,64,224,0,0,128,128,255,128,128};
// '2'
static const uint8_t bitmap_50[] = {96,32,32,32,32,192,128,192,160,160,144,140,135,129};
// '3'
static const uint8_t bitmap_51[] = {96,32,32,32,32,224,192,192,128,132,132,132,203,121};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,64,224,0,0,32,56,36,35,32,32,255,32,32};
// '5'
static const uint8_t bitmap_53[] = {224,32,32,32,32,32,0,195,130,130,130,130,198,124};
// '6'
static const uint8_t bitmap_54[] = {128,192,32,32,32,32,96,63,98,130,130,130,130,124};
// '7'
static const uint8_t bitmap_55[] = {96,32,32,32,32,32,224,0,128,96,24,4,3,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,32,32,32,224,192,121,143,132,132,132,207,121};
// '9'
static const uint8_t bitmap_57[] = {192,96,32,32,32,192,128,199,140,136,136,136,104,63};
// ':'
static const uint8_t bitmap_58[] = {0,195};

static const uint8_t char_width[] = {7,5,7,7,9,7,7,7,7,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
