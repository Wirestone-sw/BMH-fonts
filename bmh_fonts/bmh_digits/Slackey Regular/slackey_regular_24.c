// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font slackey_regular_24

#include "font.h"
#include "slackey_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {128,248,248,248,252,28,28,28,12,12,28,252,252,252,248,240,63,255,255,255,255,0,0,0,0,0,0,255,255,255,255,255,0,7,15,31,31,56,56,56,24,24,28,31,31,15,7,3};
// '1'
static const uint8_t bitmap_49[] = {64,124,252,252,252,252,252,0,0,0,255,255,255,255,255,128,0,0,31,31,31,31,31,31};
// '2'
static const uint8_t bitmap_50[] = {240,248,248,248,124,60,60,60,60,252,252,252,248,240,0,1,129,193,193,224,224,112,120,60,62,31,15,7,3,0,0,127,63,63,63,63,63,63,63,63,63,63,63,63,63};
// '3'
static const uint8_t bitmap_51[] = {4,124,124,124,124,124,124,124,124,252,252,252,252,252,0,0,0,0,0,28,28,30,30,31,31,191,251,251,241,241,240,192,0,63,63,63,63,63,63,63,63,31,31,31,31,15,15,1};
// '4'
static const uint8_t bitmap_52[] = {240,252,252,252,128,0,0,0,252,252,252,252,252,252,0,0,31,31,31,31,31,30,30,30,255,255,255,255,255,255,30,30,0,0,0,0,0,0,0,0,31,31,31,31,31,31,0,0};
// '5'
static const uint8_t bitmap_53[] = {252,252,252,252,252,60,60,60,60,60,60,60,60,60,60,31,31,31,31,31,28,60,60,60,252,252,252,248,240,0,31,63,63,63,63,62,60,60,60,63,63,31,15,15,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,240,248,120,120,120,120,120,248,248,248,248,240,224,192,255,255,255,255,224,224,224,96,96,231,227,227,227,195,3,7,31,63,127,120,112,112,112,112,112,112,127,127,63,31,0};
// '7'
static const uint8_t bitmap_55[] = {124,252,252,252,252,60,60,60,28,252,252,252,252,124,0,0,0,0,128,192,240,252,255,127,31,7,1,0,16,16,28,30,31,31,31,7,1,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {248,252,252,28,12,12,12,12,12,28,252,252,248,240,0,227,247,255,62,28,28,28,28,28,28,255,255,255,231,128,15,63,63,60,56,56,56,56,56,60,63,63,63,31,15};
// '9'
static const uint8_t bitmap_57[] = {224,252,252,254,254,14,14,14,14,14,14,30,254,252,252,192,7,31,63,63,63,56,56,56,56,56,24,252,255,255,255,255,0,0,31,31,30,30,30,62,30,30,31,31,31,31,15,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,56,120,56,56,28,60,60,28};

static const uint8_t char_width[] = {16,8,15,16,16,15,16,14,15,16,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t slackey_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
