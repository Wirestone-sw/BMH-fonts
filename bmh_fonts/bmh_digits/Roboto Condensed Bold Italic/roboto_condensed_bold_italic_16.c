// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_bold_italic_16

#include "font.h"
#include "roboto_condensed_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,240,56,24,184,248,224,8,63,127,96,112,63,31,1};
// '1'
static const uint8_t bitmap_49[] = {192,96,224,224,112,0,248,255,31,0};
// '2'
static const uint8_t bitmap_50[] = {192,224,112,48,240,240,224,224,240,248,206,199,195,1};
// '3'
static const uint8_t bitmap_51[] = {0,32,48,56,24,248,248,96,48,112,112,99,115,63,31,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,240,240,112,24,28,31,27,248,255,31,8};
// '5'
static const uint8_t bitmap_53[] = {0,0,240,240,48,48,48,48,48,115,247,195,195,127,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,112,48,48,127,255,194,195,127,62};
// '7'
static const uint8_t bitmap_55[] = {32,48,48,48,176,240,240,48,192,224,120,30,7,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,240,248,152,216,248,112,28,62,127,97,113,63,30,0};
// '9'
static const uint8_t bitmap_57[] = {224,240,56,24,184,240,224,99,103,102,62,31,15,1};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192,64,224,225,1};

static const uint8_t char_width[] = {8,5,7,8,8,8,6,8,8,7,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
