// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font irish_grover_regular_20

#include "font.h"
#include "irish_grover_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,192,96,96,96,192,192,128,0,112,255,255,135,0,0,0,0,131,255,255,254};
// '1'
static const uint8_t bitmap_49[] = {0,128,128,128,192,32,0,0,255,255,255,0};
// '2'
static const uint8_t bitmap_50[] = {192,192,192,192,64,96,224,224,192,192,0,31,3,1,128,192,224,248,127,63,31,128};
// '3'
static const uint8_t bitmap_51[] = {224,192,192,64,96,224,192,192,128,0,131,1,112,48,48,48,127,239,239,192};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,224,192,192,192,192,0,0,0,96,120,124,111,99,97,255,255,103,112,112,184};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,224,32,32,32,96,224,224,0,128,143,159,191,152,140,12,12,248,251,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,192,192,192,224,0,0,192,248,254,143,227,35,49,241,241,226,192};
// '7'
static const uint8_t bitmap_55[] = {224,224,96,96,32,32,32,224,224,224,32,3,0,0,128,240,252,127,15,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,192,64,96,32,96,192,192,128,0,142,223,255,113,48,48,48,248,239,207,7};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,224,96,96,96,224,192,128,0,7,31,63,123,96,32,48,156,255,255,30};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,192,224,96};

static const uint8_t char_width[] = {12,6,11,10,12,11,11,11,12,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t irish_grover_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
