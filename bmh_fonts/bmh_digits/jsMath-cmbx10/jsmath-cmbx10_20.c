// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmbx10_20

#include "font.h"
#include "jsmath-cmbx10_20.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,240,24,8,8,24,240,240,192,63,255,255,128,0,0,128,255,255,127};
// '1'
static const uint8_t bitmap_49[] = {48,48,48,240,248,248,0,0,0,128,128,128,255,255,255,128,128,128};
// '2'
static const uint8_t bitmap_50[] = {112,240,248,104,8,24,24,248,240,240,224,128,192,224,224,240,216,204,207,199,243,241};
// '3'
static const uint8_t bitmap_51[] = {0,96,240,248,104,8,152,248,248,240,0,32,240,240,240,2,3,135,255,253,252,120};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,96,248,248,248,0,0,56,60,55,179,176,176,255,255,255,176,176};
// '5'
static const uint8_t bitmap_53[] = {0,248,248,56,56,56,56,24,24,8,0,48,243,243,179,129,129,129,255,255,126,60};
// '6'
static const uint8_t bitmap_54[] = {128,224,240,240,56,24,8,120,248,112,0,63,255,255,255,131,1,1,255,255,254,124};
// '7'
static const uint8_t bitmap_55[] = {128,252,60,56,56,56,248,248,56,24,8,0,0,0,240,254,255,1,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,240,200,136,136,8,152,240,224,0,112,253,255,135,7,15,15,159,255,124,16};
// '9'
static const uint8_t bitmap_57[] = {224,240,248,248,12,12,12,248,248,224,0,3,231,255,239,8,136,228,255,127,63,7};
// ':'
static const uint8_t bitmap_58[] = {0,128,128,128,0,130,231,231,231,130};

static const uint8_t char_width[] = {10,9,11,11,11,11,11,11,11,11,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmbx10_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
