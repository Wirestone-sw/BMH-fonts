// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_bold_italic_20

#include "font.h"
#include "roboto_condensed_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,224,224,112,112,240,240,224,248,255,255,3,0,0,252,255,127};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,192,192,224,224,2,3,193,255,255,63,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,192,224,240,112,112,240,240,224,0,0,129,193,225,240,120,63,15,7};
// '3'
static const uint8_t bitmap_51[] = {0,0,192,224,240,112,112,240,240,224,0,0,0,0,28,28,60,255,247,67};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,224,224,224,128,192,240,248,158,143,251,255,255,131};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,224,224,224,224,224,224,224,0,14,31,15,12,28,252,248,224,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,224,224,224,0,240,254,255,63,31,29,252,248,240};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,224,224,224,224,0,0,192,240,252,62,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,224,224,240,112,240,240,224,128,224,243,255,31,28,188,254,247,131,0};
// '9'
static const uint8_t bitmap_57[] = {128,224,224,112,112,240,224,192,31,63,63,48,208,255,255,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,14,14,14};

static const uint8_t char_width[] = {9,7,10,10,10,10,9,9,10,8,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
