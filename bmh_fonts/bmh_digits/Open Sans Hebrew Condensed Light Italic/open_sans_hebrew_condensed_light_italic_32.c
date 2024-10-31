// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_italic_32

#include "font.h"
#include "open_sans_hebrew_condensed_light_italic_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,128,128,128,128,0,0,0,128,240,60,14,3,1,0,0,3,255,24,248,255,3,0,0,0,0,0,192,255,31,0,127,224,128,128,192,96,48,30,7,1,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,48,24,12,4,250,63,3,0,0,224,255,7,0,0,192,254,31,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,128,128,128,128,128,128,0,0,0,0,0,0,3,1,1,0,0,0,129,255,60,0,0,0,0,0,128,224,112,24,14,3,0,0,224,240,220,206,195,193,192,192,192,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,128,128,128,128,128,128,0,0,0,0,0,0,0,3,1,1,0,0,0,129,255,60,0,0,0,0,0,12,12,12,28,118,227,1,0,0,192,192,128,128,128,128,192,192,96,60,15,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,128,128,128,0,0,0,0,0,0,128,192,112,28,134,253,31,0,0,128,192,112,28,6,3,0,0,248,63,3,0,0,2,3,2,2,2,2,2,226,255,7,2,2,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,252,31,3,3,3,3,3,3,3,0,0,0,14,15,12,12,12,12,24,240,192,0,0,128,128,0,0,0,0,128,128,192,112,63,7,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,128,128,128,128,128,0,0,224,120,28,6,3,1,1,0,0,1,248,255,27,4,6,2,2,6,14,252,0,0,63,240,192,128,128,192,96,56,31,7,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,131,227,59,15,3,0,0,0,0,224,120,30,7,1,0,0,0,192,240,60,7,1,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,128,128,128,128,128,0,0,0,0,0,252,254,3,1,0,0,0,129,255,62,128,192,96,48,27,15,12,28,118,227,1,0,0,63,97,192,128,128,128,192,192,112,63,15,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,128,128,128,128,128,0,0,0,224,252,14,3,1,0,0,1,3,255,0,0,15,60,48,32,32,48,16,200,255,15,192,128,128,128,192,64,96,56,14,7,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,0,128,192,0,0,0,1,3,3,128,192,192,0,0,0};

static const uint8_t char_width[] = {12,7,13,14,14,14,12,12,13,12,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_italic_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
