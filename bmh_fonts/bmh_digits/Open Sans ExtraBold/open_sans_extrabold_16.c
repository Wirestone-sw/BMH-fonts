// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_extrabold_16

#include "font.h"
#include "open_sans_extrabold_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,128,128,0,0,254,255,255,3,3,255,255,254};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,128,128,4,14,15,7,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,128,128,0,0,3,135,195,227,115,127,63,14};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,128,128,0,0,3,115,115,115,123,255,223,207};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,128,128,0,0,192,240,248,252,207,255,255,255,192,192};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,128,128,128,0,63,63,63,59,59,251,243,240};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,128,128,128,252,255,255,55,59,251,251,243};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,3,3,131,227,251,255,63,7};
// '8'
static const uint8_t bitmap_56[] = {0,128,128,128,128,128,128,0,207,255,255,57,121,255,239,207};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,128,128,0,0,24,127,255,255,227,227,255,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,28,28,28};

static const uint8_t char_width[] = {8,7,8,8,10,8,8,8,8,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_extrabold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
