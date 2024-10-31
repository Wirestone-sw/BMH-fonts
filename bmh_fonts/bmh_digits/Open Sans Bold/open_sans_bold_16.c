// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_bold_16

#include "font.h"
#include "open_sans_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,128,128,0,0,254,255,3,1,1,3,255,254};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,128,4,14,7,3,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,128,128,128,0,0,3,3,129,193,97,123,63,15};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,128,128,0,0,1,3,49,49,49,127,239,199};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,128,128,0,0,128,224,240,188,142,131,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,128,128,128,128,0,31,31,31,25,25,57,241,240};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,128,128,128,252,255,51,25,25,25,249,241};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,128,1,1,1,1,193,241,127,31,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,128,128,128,0,0,199,239,123,57,57,123,239,199};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,0,0,63,127,99,97,97,51,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,28,28,28};

static const uint8_t char_width[] = {8,6,8,8,10,8,8,9,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
