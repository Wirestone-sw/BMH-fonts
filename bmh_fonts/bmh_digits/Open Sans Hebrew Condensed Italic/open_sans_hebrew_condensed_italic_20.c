// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_italic_20

#include "font.h"
#include "open_sans_hebrew_condensed_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,192,248,28,2,3,3,255,126};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,8,8,4,246,127,3};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,6,2,3,3,195,127,30};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,6,130,131,131,67,63,30};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,128,192,48,24,246,127,3};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,128,248,159,195,131,131,3,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,192,240,156,198,194,195,131,3};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,3,3,3,131,227,59,15,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,124,254,130,131,67,119,30};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,224,252,14,3,3,131,255,124};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,96,112,48};

static const uint8_t char_width[] = {9,6,7,7,9,8,9,8,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
