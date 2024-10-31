// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_bold_24

#include "font.h"
#include "open_sans_hebrew_bold_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,240,240,248,120,56,120,240,240,224,192,0,255,255,255,255,0,0,0,0,0,255,255,255,254,1,15,31,63,60,56,56,56,62,63,31,15,1};
// '1'
static const uint8_t bitmap_49[] = {128,128,192,224,240,248,248,248,248,1,7,3,1,0,255,255,255,255,0,0,0,0,0,63,63,63,63};
// '2'
static const uint8_t bitmap_50[] = {32,224,240,112,120,120,56,120,248,240,240,224,0,0,0,0,0,128,192,224,248,126,63,31,15,1,56,60,62,63,63,59,57,56,56,56,56,56,56};
// '3'
static const uint8_t bitmap_51[] = {32,240,112,112,120,56,56,120,248,240,240,224,0,0,0,0,56,56,56,56,60,127,239,231,195,128,28,56,56,56,56,56,56,56,60,63,31,15,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,224,240,248,248,248,0,0,128,192,240,248,190,159,135,131,255,255,255,255,128,128,3,3,3,3,3,3,3,3,63,63,63,63,3,3};
// '5'
static const uint8_t bitmap_53[] = {0,248,248,248,248,120,120,120,120,120,120,0,0,0,31,63,31,31,28,28,60,124,248,248,240,192,28,60,56,56,56,56,56,56,62,31,31,15,3};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,224,240,112,112,56,56,56,56,120,0,254,255,255,255,56,28,28,28,60,252,248,248,224,3,15,31,63,60,56,56,56,60,63,31,15,7};
// '7'
static const uint8_t bitmap_55[] = {120,120,120,120,120,120,120,120,120,248,248,248,120,0,0,0,0,0,192,240,252,255,63,15,1,0,0,0,32,60,63,63,31,7,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {128,224,240,240,120,56,56,56,120,240,240,224,0,128,199,239,255,126,60,56,124,126,255,231,195,128,15,31,31,63,56,56,56,56,56,63,31,31,7};
// '9'
static const uint8_t bitmap_57[] = {192,224,240,240,120,120,56,120,240,240,224,192,0,31,63,127,127,112,240,112,112,56,255,255,255,255,0,56,56,56,56,56,56,60,30,31,15,3,0};
// ':'
static const uint8_t bitmap_58[] = {0,128,128,128,128,1,7,7,7,3,8,30,30,30,28};

static const uint8_t char_width[] = {13,9,13,13,14,13,13,13,13,13,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_bold_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
