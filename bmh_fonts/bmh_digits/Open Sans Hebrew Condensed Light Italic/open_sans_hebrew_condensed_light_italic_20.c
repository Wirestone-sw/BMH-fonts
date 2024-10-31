// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_italic_20

#include "font.h"
#include "open_sans_hebrew_condensed_light_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,224,28,6,1,1,255,8};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,8,4,226,31};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,2,1,1,129,115,12};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,130,129,129,65,50,12};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,192,32,24,198,63,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,224,156,131,129,129,1,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,224,152,68,66,129,1,1};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,1,1,129,97,25,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,126,131,129,65,35,30};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,248,6,3,1,1,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,112,32};

static const uint8_t char_width[] = {8,4,6,6,9,7,8,6,8,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
