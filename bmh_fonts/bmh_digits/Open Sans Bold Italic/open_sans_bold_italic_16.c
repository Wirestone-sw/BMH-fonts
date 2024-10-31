// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_bold_italic_16

#include "font.h"
#include "open_sans_bold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,128,128,0,252,254,15,3,1,227,255,127};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,128,6,6,227,255,127,7};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,128,128,128,0,131,195,225,113,59,31,15};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,128,128,0,1,49,49,49,251,255,15};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,128,128,224,240,184,140,231,255,255,131};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,128,128,128,128,128,16,30,31,27,57,249,241,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,128,248,254,63,27,25,249,249,225,0};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,1,193,225,249,63,15,7,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,128,128,128,0,128,192,238,63,59,49,249,239,143};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,128,0,60,127,127,97,97,251,255,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,28,28,8};

static const uint8_t char_width[] = {8,6,7,7,8,8,9,8,9,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_bold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
