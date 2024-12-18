// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_extra_bold_italic_24

#include "font.h"
#include "open_sans_hebrew_condensed_extra_bold_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,240,240,248,120,248,248,240,240,192,252,255,255,255,15,0,240,255,255,255,63,15,31,63,63,63,60,63,31,31,7,1,0};
// '1'
static const uint8_t bitmap_49[] = {128,128,192,224,240,240,248,248,248,1,7,131,249,255,255,255,31,0,0,48,63,63,63,63,1,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,64,224,240,112,120,120,248,248,240,240,0,0,0,128,193,224,248,252,127,31,15,7,60,62,63,63,63,63,61,60,60,60,4,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,32,224,112,112,120,120,248,248,240,240,64,0,0,0,32,56,56,120,252,255,239,231,3,0,60,60,56,56,56,60,62,31,31,15,3,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,224,240,248,248,248,248,192,224,248,252,159,143,251,255,255,255,143,128,3,3,3,3,35,63,63,63,63,3,3,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,248,248,248,120,120,120,120,120,8,0,16,63,63,63,63,125,252,252,248,240,0,0,60,60,56,56,56,60,63,31,15,7,1,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,224,224,240,112,120,120,120,120,16,192,252,255,255,255,31,28,252,252,252,248,0,0,15,31,63,63,56,56,62,31,31,15,3,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,96,120,120,120,120,120,248,248,248,248,120,8,0,0,0,0,192,240,252,255,127,31,7,1,0,0,32,56,60,63,63,15,7,1,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,224,240,240,248,56,248,248,240,240,192,192,231,255,255,127,124,252,255,239,199,3,0,63,63,63,56,56,62,63,31,15,3,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,224,224,240,248,120,248,248,240,224,62,127,255,255,127,112,248,255,255,255,63,56,56,56,60,60,31,31,15,3,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,128,0,0,0,0,15,15,15,7,1,60,60,60,60,0,0,0};

static const uint8_t char_width[] = {12,9,12,13,12,13,13,14,12,11,7};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_extra_bold_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
