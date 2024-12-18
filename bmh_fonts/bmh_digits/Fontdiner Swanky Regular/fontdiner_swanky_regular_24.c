// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font fontdiner_swanky_regular_24

#include "font.h"
#include "fontdiner_swanky_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,224,240,112,112,48,48,48,48,112,240,224,224,192,128,255,255,255,255,129,0,0,0,0,0,0,0,128,255,255,255,255,0,1,3,7,7,15,14,14,14,14,14,7,7,7,3,1,0};
// '1'
static const uint8_t bitmap_49[] = {16,16,16,56,56,248,248,248,252,124,0,0,0,0,0,0,0,0,0,0,255,255,255,255,0,0,0,0,0,0,32,32,48,48,48,63,63,63,63,56,48,48,32,32,32};
// '2'
static const uint8_t bitmap_50[] = {62,248,240,240,56,56,28,28,28,56,120,248,240,224,192,0,31,129,192,192,224,224,112,112,56,60,31,31,207,51,30,31,31,31,31,61,60,60,60,60,60,60,63,63,0};
// '3'
static const uint8_t bitmap_51[] = {3,124,248,120,56,28,28,12,28,28,60,252,248,240,224,0,0,128,227,0,0,28,28,28,28,28,62,255,255,255,243,192,56,15,7,15,14,28,28,28,28,28,30,15,15,7,3,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,224,240,248,252,255,0,0,0,240,248,252,222,207,199,195,255,255,255,255,224,240,254,0,32,32,32,48,48,48,63,63,63,63,48,33,47};
// '5'
static const uint8_t bitmap_53[] = {56,248,248,252,28,28,28,28,28,28,14,14,30,254,6,0,215,143,7,7,7,7,7,7,15,255,254,254,253,248,16,15,7,7,14,14,28,30,30,30,15,15,7,3,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,192,224,240,248,120,56,56,56,112,112,252,255,0,0,248,255,255,255,127,29,14,14,6,14,14,28,252,253,251,224,3,15,31,63,63,56,112,112,96,112,48,56,63,31,15,3};
// '7'
static const uint8_t bitmap_55[] = {12,124,248,248,24,56,56,56,56,56,248,248,248,248,248,120,8,0,0,15,1,0,0,0,0,192,252,255,255,63,15,1,0,0,0,0,32,32,32,48,56,60,63,63,55,49,32,32,32,32,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,240,248,248,124,28,12,12,12,28,252,248,248,240,192,0,192,225,247,255,255,127,60,24,24,24,60,127,255,255,247,225,192,7,15,31,31,63,60,56,48,48,48,56,60,63,31,31,15,3};
// '9'
static const uint8_t bitmap_57[] = {128,224,240,248,248,56,28,28,28,24,56,248,240,224,192,0,15,191,63,127,252,240,224,224,224,224,112,255,255,255,255,62,0,1,255,126,28,24,56,56,56,60,62,31,15,7,1,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,224,240,240,240,224,48,120,121,121,120};

static const uint8_t char_width[] = {17,15,15,16,14,15,16,17,17,16,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t fontdiner_swanky_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
