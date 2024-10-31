// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_semibold_italic_16

#include "font.h"
#include "open_sans_semibold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,128,128,0,248,254,7,3,1,129,255,127};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,128,2,6,195,255,31,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,128,128,0,131,131,193,97,49,31,15};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,128,128,128,0,1,51,49,49,249,207,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,128,192,224,152,140,134,251,191,131};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,128,128,128,128,28,31,25,25,249,241,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,240,252,54,27,25,185,249,97};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,1,129,225,113,61,15,3,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,128,128,128,0,192,230,63,59,49,241,207,15};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,128,128,0,28,127,99,97,97,241,255,62};
// ':'
static const uint8_t bitmap_58[] = {0,0,28,28};

static const uint8_t char_width[] = {8,6,7,7,8,7,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_semibold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
