// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_light_italic_24

#include "font.h"
#include "roboto_light_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,240,124,6,1,1,0,0,0,1,135,254,60,255,0,0,0,0,0,0,128,240,63,3,0,0,1,2,2,2,2,1,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {8,4,2,2,2,255,63,0,0,0,192,255,15,0,0,0,0,7,3,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,24,30,3,1,0,0,0,0,193,127,62,0,0,128,192,96,48,24,12,6,3,1,0,0,2,3,3,2,2,2,2,2,2,2,2,2,0};
// '3'
static const uint8_t bitmap_51[] = {0,16,14,3,1,0,0,0,128,129,99,62,224,128,0,0,1,1,1,1,2,230,124,0,0,1,3,2,2,2,2,3,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,48,24,12,246,127,1,32,48,56,46,35,33,32,32,160,252,63,32,32,0,0,0,0,0,0,0,0,7,7,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,128,248,15,129,129,129,129,1,1,1,1,192,1,1,1,0,0,0,1,131,254,24,0,1,3,6,4,4,4,6,2,1,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,224,56,12,132,130,130,129,1,1,120,255,3,1,1,0,0,0,1,131,254,0,1,3,6,4,4,4,6,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {2,1,1,1,1,1,1,193,97,57,15,3,0,0,128,224,112,28,7,1,0,0,0,0,4,6,3,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,124,198,129,1,0,0,0,129,227,62,248,140,6,2,1,1,1,1,3,198,124,0,0,1,3,2,2,2,2,3,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {248,158,3,1,0,0,0,0,1,239,252,1,3,6,4,4,4,132,98,59,15,1,2,2,2,2,1,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,32,48,32,0,0,0,0,0,2,3,0,0,0};

static const uint8_t char_width[] = {12,7,13,12,13,12,11,12,12,11,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_light_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
