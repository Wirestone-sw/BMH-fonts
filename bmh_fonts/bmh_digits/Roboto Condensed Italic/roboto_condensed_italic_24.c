// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_italic_24

#include "font.h"
#include "roboto_condensed_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {224,252,62,7,1,1,1,131,255,254,255,255,0,0,0,128,224,255,63,1,1,3,3,3,3,3,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {24,12,12,134,254,255,3,0,0,240,255,63,0,0,0,4,7,7,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,24,30,31,3,1,1,129,227,255,62,0,128,192,224,112,56,28,7,3,1,0,0,2,3,3,3,3,3,3,3,3,3,3,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,14,15,131,129,129,193,247,127,28,224,224,128,0,1,1,129,247,255,28,0,0,1,3,3,3,3,3,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,240,56,142,255,255,3,64,112,120,126,103,97,96,224,255,127,96,32,0,0,0,0,0,0,4,7,7,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,252,191,195,195,195,131,3,3,3,192,193,1,0,0,0,129,255,255,0,0,1,3,7,6,6,7,3,1,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {128,224,248,156,206,198,195,131,3,255,255,3,1,0,0,129,255,127,1,3,7,6,6,7,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {4,3,3,3,3,3,195,243,63,15,3,0,128,224,248,60,15,3,0,0,0,0,6,7,3,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,124,254,199,131,129,129,227,127,62,120,252,222,3,1,1,129,227,255,60,0,0,1,3,3,3,3,3,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {240,252,31,3,1,1,1,239,255,120,1,7,15,140,140,204,246,63,15,0,0,3,3,3,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,224,224,0,0,0,0,7,7,2,0};

static const uint8_t char_width[] = {10,7,12,11,12,11,9,11,11,10,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
