// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_extrabold_italic_16

#include "font.h"
#include "open_sans_extrabold_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,128,128,0,0,252,254,255,7,131,255,255,255,28};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,128,128,128,4,14,14,231,255,255,63,1};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,128,128,128,0,128,135,199,227,115,63,31,15};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,128,128,128,128,128,0,128,0,3,51,51,243,255,255,207};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,128,128,128,224,240,248,220,247,255,255,207,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,128,128,128,128,128,128,128,128,32,62,63,63,251,251,243,227,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,128,248,254,255,55,59,251,251,243,3};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,128,3,195,227,251,127,31,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,128,128,128,0,0,128,192,239,255,63,121,249,255,207,2};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,128,0,62,127,127,115,179,255,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,28,28,28};

static const uint8_t char_width[] = {9,8,8,9,9,10,9,9,10,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_extrabold_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
