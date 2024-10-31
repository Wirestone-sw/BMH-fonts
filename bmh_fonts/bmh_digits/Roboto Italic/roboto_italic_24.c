// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_italic_24

#include "font.h"
#include "roboto_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,240,252,30,7,3,1,1,1,3,255,254,62,255,239,128,0,0,0,128,192,254,63,7,0,1,1,3,3,3,3,3,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {24,24,12,12,198,254,255,3,0,0,0,240,255,63,0,0,0,0,4,7,7,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,28,30,7,3,1,1,1,129,227,255,62,0,128,192,224,112,56,28,14,7,3,1,0,0,3,3,3,3,3,3,3,3,3,3,3,3,0};
// '3'
static const uint8_t bitmap_51[] = {0,8,14,15,131,129,129,129,193,227,127,62,224,224,128,0,1,1,1,131,231,255,60,0,0,1,3,3,3,3,3,3,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,224,112,56,142,255,255,7,96,112,120,110,103,99,96,96,224,255,127,97,96,0,0,0,0,0,0,0,4,7,7,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,192,252,127,135,131,131,131,3,3,3,3,64,192,195,3,3,1,1,1,131,255,255,60,0,0,1,3,7,6,6,6,7,3,3,1,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,224,248,156,206,198,198,195,131,3,0,56,255,255,3,1,0,0,0,129,255,255,28,0,1,3,7,6,6,6,7,3,1,0,0};
// '7'
static const uint8_t bitmap_55[] = {2,3,3,3,3,3,3,195,227,123,31,7,3,0,0,128,224,248,60,15,3,1,0,0,0,0,4,7,7,1,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,124,255,199,131,129,129,193,227,127,62,248,254,134,3,1,1,1,129,195,255,124,0,0,1,3,3,3,3,3,3,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {248,254,15,3,1,1,1,3,7,255,252,3,7,15,12,140,140,196,118,63,15,1,0,3,3,3,1,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,224,224,0,0,0,0,7,7,2,0};

static const uint8_t char_width[] = {12,8,13,12,13,13,12,13,12,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};