// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_bold_italic_20

#include "font.h"
#include "open_sans_hebrew_condensed_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,224,248,252,30,7,7,255,255,254};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,16,56,28,206,254,255,31,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,4,14,7,135,231,255,126,28};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,6,142,135,199,231,127,63,30};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,128,224,112,60,254,255,127,3};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,128,240,255,255,199,199,135,7,7};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,192,240,252,158,206,199,199,135,7};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,7,7,7,199,231,255,63,15,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,124,254,254,199,195,127,127,30};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,224,248,254,14,7,135,255,254,124};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,48,56,56,24};

static const uint8_t char_width[] = {10,8,8,8,10,9,10,9,9,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
