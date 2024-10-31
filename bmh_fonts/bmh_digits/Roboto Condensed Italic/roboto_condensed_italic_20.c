// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_italic_20

#include "font.h"
#include "roboto_condensed_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,192,224,48,48,48,240,224,224,255,15,0,0,0,128,255,63};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,192,224,1,0,248,255,3};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,224,96,48,48,48,240,224,0,0,1,129,192,96,48,28,15,3};
// '3'
static const uint8_t bitmap_51[] = {0,128,224,112,48,48,48,224,224,0,0,0,12,12,12,254,243,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,224,224,0,128,224,112,28,6,131,254,63,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,96,96,96,96,96,96,0,16,31,11,12,12,28,248,224,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,224,96,96,128,252,63,27,12,12,28,248};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,96,0,0,128,224,120,30,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,48,48,48,240,224,192,224,63,31,24,24,252,239,3};
// '9'
static const uint8_t bitmap_57[] = {128,224,96,48,48,112,224,192,31,127,96,96,96,240,255,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,6,6,6};

static const uint8_t char_width[] = {9,5,10,9,10,10,8,9,9,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
