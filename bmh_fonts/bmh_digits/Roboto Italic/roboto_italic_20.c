// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_italic_20

#include "font.h"
#include "roboto_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,112,48,48,48,224,224,240,255,7,0,0,0,0,128,255,127};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,192,224,224,1,0,128,254,127,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,192,224,96,48,48,48,48,224,224,0,0,1,129,192,224,112,56,28,15,3};
// '3'
static const uint8_t bitmap_51[] = {0,192,224,96,48,48,48,48,224,192,0,0,0,24,24,24,24,252,231,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,224,224,224,0,128,224,112,24,14,7,129,254,63,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,224,96,96,96,96,96,96,0,16,31,31,12,12,12,28,248,240,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,192,96,96,96,0,224,252,63,27,13,12,12,28,248,224};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,96,224,224,32,0,0,0,128,224,120,28,7,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,112,48,48,48,224,224,192,227,55,28,24,24,24,124,231,7};
// '9'
static const uint8_t bitmap_57[] = {128,224,96,48,48,48,112,224,192,63,63,96,96,96,32,240,255,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,3,3,1};

static const uint8_t char_width[] = {10,6,11,10,11,11,10,11,10,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
