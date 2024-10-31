// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_bold_italic_20

#include "font.h"
#include "cousine_bold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,192,224,96,96,224,224,192,0,240,254,255,15,1,28,28,192,252,255,63,3};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,192,192,224,224,224,0,0,1,1,1,129,252,255,127,3,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,192,192,224,96,96,224,224,192,128,0,0,128,193,225,113,112,56,28,30,15,7,1};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,192,224,224,96,96,224,224,192,128,128,129,129,1,24,24,56,184,254,239,231,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,192,224,224,224,224,128,224,240,248,220,206,195,193,254,255,255,193};
// '5'
static const uint8_t bitmap_53[] = {0,0,192,224,224,96,96,96,96,96,96,96,128,156,159,31,27,12,12,156,252,248,248,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,224,96,96,224,224,192,0,224,254,255,63,25,12,12,156,252,249,113,1};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,224,224,0,192,224,248,60,30,7,3,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,224,96,96,96,224,224,192,128,192,226,255,63,31,24,24,184,254,255,231,1};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,192,224,224,96,96,224,224,192,128,159,191,63,57,48,48,216,255,255,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,128,128,0,0,3,3,3};

static const uint8_t char_width[] = {12,10,13,12,12,12,12,10,12,11,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_bold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
