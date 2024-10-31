// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_bold_italic_16

#include "font.h"
#include "open_sans_hebrew_condensed_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,192,192,192,128,240,254,63,1,192,255,127,7};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,192,192,1,3,225,254,127,3};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,192,192,192,192,128,128,192,225,112,56,31,7,1};
// '3'
static const uint8_t bitmap_51[] = {192,192,192,192,192,128,24,24,252,247,103,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,192,64,120,92,71,251,255,71,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,192,192,192,192,64,12,15,15,252,248,120,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,192,192,192,240,254,63,9,204,252,120,0};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,240,60,15,7,1};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,192,192,192,128,242,63,31,188,254,103,1};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,192,192,192,0,31,63,177,208,255,63,3};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128,6,6};

static const uint8_t char_width[] = {8,6,8,6,7,7,8,6,7,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
