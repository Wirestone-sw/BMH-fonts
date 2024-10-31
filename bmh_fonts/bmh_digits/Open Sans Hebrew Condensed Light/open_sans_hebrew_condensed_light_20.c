// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_20

#include "font.h"
#include "open_sans_hebrew_condensed_light_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,248,6,1,1,3,14,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,12,6,249,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,2,1,1,1,3,254};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,2,129,129,129,193,126,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,128,96,28,3,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,252,131,129,129,129,129,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,224,28,130,65,193,129,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,1,1,1,1,193,57,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,28,98,129,129,193,102,28};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,252,2,1,1,3,222,240};
// ':'
static const uint8_t bitmap_58[] = {0,0,32,112};

static const uint8_t char_width[] = {7,4,6,7,9,7,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
