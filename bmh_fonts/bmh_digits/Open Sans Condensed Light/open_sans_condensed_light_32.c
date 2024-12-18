// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_light_32

#include "font.h"
#include "open_sans_condensed_light_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,240,252,14,7,3,3,7,14,252,240,56,255,0,0,0,0,0,0,0,0,255,0,31,126,224,192,128,128,192,224,126,31};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,16,24,12,6,255,255,0,0,0,0,255,255,0,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,6,2,3,3,3,3,7,14,252,248,0,0,0,0,0,0,192,96,56,15,1,128,192,176,152,140,131,129,128,128,128,128};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,0,12,6,3,3,3,3,7,6,252,248,0,0,0,24,24,24,24,60,102,227,128,192,192,128,128,128,128,128,192,224,121,63};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,56,14,255,255,0,0,0,0,192,112,28,7,1,0,0,255,255,0,0,0,15,15,12,12,12,12,12,12,255,255,12,12,12};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,254,255,3,3,3,3,3,3,3,0,15,13,12,12,12,12,28,24,112,224,192,128,128,128,128,128,192,224,120,31};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,192,240,60,14,7,3,3,3,3,0,255,231,24,12,12,12,12,28,120,224,31,124,224,192,128,128,128,192,240,63};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,3,3,131,243,63,7,0,0,0,0,0,0,224,124,15,1,0,0,0,0,0,224,248,31,3,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,248,254,6,3,3,3,3,6,158,252,0,0,129,227,38,28,24,24,60,102,195,129,0,30,127,224,192,128,128,128,128,192,224,127,30};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,192,248,30,6,3,3,3,7,14,252,224,1,31,56,112,96,96,96,48,48,255,255,0,128,128,128,128,128,192,224,120,31,3};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128,192,192,1,3,3,192,224,224};

static const uint8_t char_width[] = {11,6,11,11,13,10,10,12,12,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_light_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
