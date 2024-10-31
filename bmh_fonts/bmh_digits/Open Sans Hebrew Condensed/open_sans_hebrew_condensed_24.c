// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_24

#include "font.h"
#include "open_sans_hebrew_condensed_24.h"

// '0'
static const uint8_t bitmap_48[] = {240,252,14,3,3,3,30,252,224,127,255,128,0,0,0,192,255,63,0,3,7,6,6,6,7,1,0};
// '1'
static const uint8_t bitmap_49[] = {24,28,12,246,255,0,0,0,255,255,0,0,0,7,7};
// '2'
static const uint8_t bitmap_50[] = {2,6,3,3,3,7,254,252,0,0,128,192,112,56,14,7,1,0,6,7,7,6,6,6,6,6,6};
// '3'
static const uint8_t bitmap_51[] = {6,6,3,3,3,3,254,252,0,0,0,2,2,3,7,141,248,240,6,6,6,4,6,6,3,3,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,240,60,15,255,255,0,0,96,120,126,99,96,96,96,255,255,96,96,0,0,0,0,0,0,0,7,7,0,0};
// '5'
static const uint8_t bitmap_53[] = {128,255,15,3,3,3,3,3,0,1,3,3,1,3,3,135,254,120,7,6,6,6,6,7,3,1,0};
// '6'
static const uint8_t bitmap_54[] = {192,248,28,6,131,131,3,3,0,127,255,134,1,1,1,7,255,252,0,3,7,6,6,6,7,3,0};
// '7'
static const uint8_t bitmap_55[] = {3,3,3,3,3,131,243,127,7,0,0,0,224,252,31,3,0,0,0,4,7,7,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {56,254,198,3,3,3,198,254,56,240,252,13,7,3,7,13,248,240,1,3,6,6,4,6,7,3,1};
// '9'
static const uint8_t bitmap_57[] = {248,254,6,3,3,7,30,252,192,3,7,14,12,12,12,227,255,15,0,6,4,6,6,3,1,0,0};
// ':'
static const uint8_t bitmap_58[] = {224,224,0,0,7,7};

static const uint8_t char_width[] = {9,5,9,9,11,9,9,9,9,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
