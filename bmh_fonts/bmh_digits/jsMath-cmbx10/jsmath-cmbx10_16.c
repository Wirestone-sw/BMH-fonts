// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmbx10_16

#include "font.h"
#include "jsmath-cmbx10_16.h"

// '0'
static const uint8_t bitmap_48[] = {240,248,252,4,4,252,248,240,7,15,31,16,16,31,31,15};
// '1'
static const uint8_t bitmap_49[] = {8,8,248,252,0,0,16,16,31,31,16,16};
// '2'
static const uint8_t bitmap_50[] = {24,60,28,4,140,252,248,120,24,28,30,31,29,29,28,30};
// '3'
static const uint8_t bitmap_51[] = {16,56,188,132,196,252,56,0,14,30,30,16,16,31,31,15};
// '4'
static const uint8_t bitmap_52[] = {128,192,96,56,12,254,254,0,1,1,1,9,15,15,15,9};
// '5'
static const uint8_t bitmap_53[] = {0,252,216,88,88,200,140,0,4,14,22,16,16,31,15,7};
// '6'
static const uint8_t bitmap_54[] = {224,248,248,76,68,220,252,128,7,15,31,16,16,31,31,15};
// '7'
static const uint8_t bitmap_55[] = {120,28,28,28,220,124,60,28,4,0,0,28,63,31,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {48,248,228,228,196,236,184,0,15,31,16,17,17,19,15,7};
// '9'
static const uint8_t bitmap_57[] = {120,254,254,130,130,130,254,248,4,15,14,8,8,12,7,1};
// ':'
static const uint8_t bitmap_58[] = {64,224,224,8,28,28};

static const uint8_t char_width[] = {8,6,8,8,8,8,8,9,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmbx10_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
