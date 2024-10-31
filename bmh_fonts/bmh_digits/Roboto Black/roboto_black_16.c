// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_black_16

#include "font.h"
#include "roboto_black_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,240,48,48,240,224,192,63,127,255,192,192,255,127,63};
// '1'
static const uint8_t bitmap_49[] = {192,192,96,224,240,240,0,0,0,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {224,224,112,48,48,240,224,192,192,224,248,252,222,207,199,193};
// '3'
static const uint8_t bitmap_51[] = {0,96,112,112,48,48,240,224,224,16,112,240,227,195,195,255,127,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,224,240,240,240,0,28,31,31,25,255,255,255,24};
// '5'
static const uint8_t bitmap_53[] = {192,240,240,48,48,48,48,48,99,103,227,195,195,255,127,62};
// '6'
static const uint8_t bitmap_54[] = {128,192,224,96,48,48,48,0,63,127,255,195,195,231,127,126};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,48,48,240,240,112,0,0,192,240,252,63,15,1,0};
// '8'
static const uint8_t bitmap_56[] = {224,224,240,48,48,240,224,224,124,127,255,195,195,255,127,60};
// '9'
static const uint8_t bitmap_57[] = {192,224,240,48,48,240,224,192,7,207,206,204,108,127,63,31};
// ':'
static const uint8_t bitmap_58[] = {128,128,128,193,193,193};

static const uint8_t char_width[] = {8,6,8,9,8,8,8,9,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_black_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
