// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_semibold_italic_20

#include "font.h"
#include "open_sans_semibold_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,192,240,252,30,7,3,3,3,255,254,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,24,28,12,206,255,255,7};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,6,6,3,3,131,195,255,126,24};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,6,134,131,131,195,195,127,126,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,128,192,224,112,56,28,246,255,63,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,192,248,255,207,195,195,195,131,3,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,224,248,188,142,198,195,195,195,131,3};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,2,3,3,3,131,227,243,127,31,7,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,124,254,239,131,131,195,255,126,60};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,248,254,142,7,3,3,135,255,254,112};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,96,112,112};

static const uint8_t char_width[] = {11,7,9,9,11,10,11,11,11,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_semibold_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
