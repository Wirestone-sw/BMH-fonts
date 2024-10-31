// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_bold_24

#include "font.h"
#include "open_sans_hebrew_condensed_bold_24.h"

// '0'
static const uint8_t bitmap_48[] = {128,224,240,248,56,56,248,240,224,128,255,255,255,1,0,0,1,255,255,255,3,31,63,62,56,56,63,63,31,3};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,224,240,248,248,248,1,1,3,1,0,255,255,255,0,0,0,0,0,63,63,63};
// '2'
static const uint8_t bitmap_50[] = {96,240,112,56,56,120,248,240,224,0,0,0,0,192,224,248,127,63,15,1,56,62,63,63,59,57,56,56,56,56};
// '3'
static const uint8_t bitmap_51[] = {48,112,112,56,56,120,248,240,224,128,0,0,56,56,56,60,255,239,231,128,60,56,56,56,56,56,63,31,31,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,248,248,248,248,0,0,128,224,248,254,159,135,128,255,255,255,128,128,3,3,3,3,3,3,3,63,63,63,3,3};
// '5'
static const uint8_t bitmap_53[] = {0,248,248,248,120,120,120,120,120,0,24,63,31,31,28,60,248,248,240,224,60,56,56,56,56,56,63,31,15,7};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,240,112,56,56,56,56,0,254,255,255,57,28,28,60,252,248,240,7,31,63,62,56,56,60,63,31,7};
// '7'
static const uint8_t bitmap_55[] = {120,120,120,120,120,120,248,248,248,120,0,0,0,128,240,254,255,63,7,0,0,32,60,63,63,15,1,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,240,248,56,56,248,240,240,192,131,231,255,127,60,60,255,255,231,129,15,31,63,56,56,56,56,63,31,15};
// '9'
static const uint8_t bitmap_57[] = {192,224,240,120,56,56,240,240,224,128,31,127,127,112,96,112,56,255,255,255,0,56,56,56,56,60,31,15,7,0};
// ':'
static const uint8_t bitmap_58[] = {0,128,128,128,0,1,7,7,7,1,12,30,30,30,12};

static const uint8_t char_width[] = {10,8,10,10,12,10,10,10,10,10,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_bold_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
