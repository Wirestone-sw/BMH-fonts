// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_light_italic_24

#include "font.h"
#include "roboto_condensed_light_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,240,30,3,1,0,0,0,1,254,126,255,0,0,0,0,0,192,63,7,0,1,3,2,2,2,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {4,4,2,2,254,31,0,0,128,255,7,0,0,0,7,1,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,24,14,3,1,0,0,128,227,62,0,128,192,96,48,24,12,7,1,0,0,2,3,3,2,2,2,2,2,2,2,0};
// '3'
static const uint8_t bitmap_51[] = {0,8,14,131,129,128,128,64,97,63,224,128,0,0,0,0,1,195,126,0,0,1,2,2,2,2,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,96,24,12,255,15,64,48,60,38,35,32,32,224,255,35,32,0,0,0,0,0,0,0,7,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,126,131,129,129,129,1,1,1,64,192,1,1,0,0,0,1,255,60,0,0,3,6,4,4,4,6,3,1,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,112,24,132,130,131,129,1,1,248,255,3,1,0,0,0,129,255,24,0,3,6,4,4,4,2,3,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,1,1,1,1,1,193,113,29,7,1,0,0,192,112,28,7,1,0,0,0,0,4,7,1,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,126,195,129,128,128,64,97,63,12,252,134,1,0,0,0,0,195,126,0,0,0,1,2,2,2,2,1,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {248,14,3,1,0,0,0,131,254,1,3,4,4,132,198,114,31,3,2,2,2,1,1,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,32,48,16,0,0,0,0,0,2,3,2,0,0};

static const uint8_t char_width[] = {10,6,11,10,11,11,10,11,11,9,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_light_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
