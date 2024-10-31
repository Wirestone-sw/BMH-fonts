// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_extra_bold_italic_20

#include "font.h"
#include "open_sans_hebrew_condensed_extra_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,224,248,254,254,15,135,255,255,254,24};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,16,120,56,156,254,255,255,63,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,4,30,14,135,231,255,255,126,8};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,6,142,135,199,231,255,127,62,12};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,192,224,248,188,254,255,255,31,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,128,248,255,255,223,199,199,135,7,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,192,240,252,254,222,199,199,199,7,3};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,7,7,7,199,247,255,127,31,15,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,124,254,254,207,231,255,127,62,12};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,224,248,254,254,15,135,255,255,254,24};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,32,120,120,56,16};

static const uint8_t char_width[] = {11,9,9,9,11,10,11,10,10,10,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_extra_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
