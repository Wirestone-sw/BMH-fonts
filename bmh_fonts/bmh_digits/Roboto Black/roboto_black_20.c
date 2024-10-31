// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_black_20

#include "font.h"
#include "roboto_black_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,224,224,224,224,192,128,0,255,255,255,255,0,0,0,255,255,255,255};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,192,192,224,224,3,3,1,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,192,192,224,224,224,224,224,192,192,0,3,3,3,129,192,224,248,127,63,31,7};
// '3'
static const uint8_t bitmap_51[] = {128,192,192,224,224,224,224,224,192,192,0,1,1,1,57,56,56,56,255,239,239,195};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,224,224,224,224,0,192,224,248,190,159,135,255,255,255,255,128};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,224,224,224,224,224,224,224,0,24,31,63,31,28,28,28,252,248,248,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,224,224,224,224,0,0,252,255,255,255,27,29,28,124,252,248,240};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,224,224,224,224,224,224,0,0,0,0,192,248,254,127,31,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,192,224,224,224,224,224,192,192,0,195,239,255,255,56,56,56,255,255,239,195};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,224,224,224,224,224,192,128,0,63,127,255,251,224,224,96,255,255,255,126};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,4,14,14,14};

static const uint8_t char_width[] = {11,7,11,11,11,11,11,11,11,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_black_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
