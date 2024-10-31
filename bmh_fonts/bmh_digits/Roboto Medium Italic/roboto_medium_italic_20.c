// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_medium_italic_20

#include "font.h"
#include "roboto_medium_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,112,48,48,112,224,224,252,255,63,0,0,0,0,224,255,127};
// '1'
static const uint8_t bitmap_49[] = {128,128,192,192,192,224,32,1,0,192,255,255,7,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,192,224,96,48,48,48,112,224,224,0,2,1,129,192,224,112,56,30,15,7};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,192,192,96,96,96,224,192,192,0,0,1,1,48,48,48,112,252,207,15};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,192,224,224,224,128,192,224,248,156,142,135,243,255,255,131};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,224,224,96,96,96,96,96,96,0,28,31,31,12,12,12,252,248,240,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,192,96,96,96,0,240,252,255,27,13,12,12,252,248,240};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,224,224,32,0,0,0,192,240,120,30,15,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,224,112,48,48,112,240,224,0,192,227,127,31,24,24,56,252,239,199,1};
// '9'
static const uint8_t bitmap_57[] = {128,224,224,112,48,48,112,224,192,63,127,112,96,96,48,248,255,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,7,7,7};

static const uint8_t char_width[] = {10,7,11,11,11,11,10,11,11,9,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_medium_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
