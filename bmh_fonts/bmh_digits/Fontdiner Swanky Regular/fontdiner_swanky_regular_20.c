// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font fontdiner_swanky_regular_20

#include "font.h"
#include "fontdiner_swanky_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,240,248,252,60,14,14,6,6,6,14,28,252,248,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,128,128,2,3,3,3,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {192,128,0,128,128,192,192,192,192,128,128,0,7,127,7,3,129,129,192,193,225,127,127,255};
// '3'
static const uint8_t bitmap_51[] = {128,0,128,128,128,128,128,128,128,0,0,0,63,15,3,1,193,193,193,227,255,255,191,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,224,0,0,0,128,192,224,112,56,30,255,255,255,0,128,224};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,128,128,128,192,192,192,192,192,64,3,255,127,63,49,49,49,113,113,241,225,223,128};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,128,0,192,240,0,0,224,252,254,255,127,51,51,49,51,115,231,239,208,0};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,0,0,0,0,0,0,0,0,0,1,15,127,7,3,3,3,3,243,255,255,127,31,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,128,128,0,0,0,0,0,0,0,60,254,255,255,131,129,129,131,199,255,254,124,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,128,128,128,128,0,0,0,0,248,254,255,255,131,1,1,1,3,207,255,254,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,128,128,128,128,0};

static const uint8_t char_width[] = {15,8,12,12,12,13,14,14,14,13,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t fontdiner_swanky_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
