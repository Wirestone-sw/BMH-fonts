// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font creepster_caps_regular_20

#include "font.h"
#include "creepster_caps_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,240,240,240,240,240,224,0,255,255,255,1,1,255,255,255,14};
// '1'
static const uint8_t bitmap_49[] = {128,224,240,240,240,240,1,1,255,255,255,31};
// '2'
static const uint8_t bitmap_50[] = {128,192,224,240,240,240,224,224,128,3,3,131,199,227,255,127,63,31};
// '3'
static const uint8_t bitmap_51[] = {0,192,224,224,224,224,224,128,0,3,7,71,231,247,255,255,255,199};
// '4'
static const uint8_t bitmap_52[] = {0,0,224,240,240,240,240,0,254,255,223,199,255,255,255,192};
// '5'
static const uint8_t bitmap_53[] = {0,240,240,240,240,240,240,240,240,2,127,127,127,99,115,227,231,135};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,240,240,240,240,224,128,222,255,255,231,97,119,243,227,195};
// '7'
static const uint8_t bitmap_55[] = {64,240,240,240,240,240,240,240,2,7,131,227,251,255,127,7};
// '8'
static const uint8_t bitmap_56[] = {128,224,224,240,240,240,240,224,192,3,207,255,255,57,253,255,255,199};
// '9'
static const uint8_t bitmap_57[] = {0,224,240,240,240,240,240,224,192,7,15,63,63,56,216,255,255,127};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,64,224,96};

static const uint8_t char_width[] = {9,6,9,9,8,9,9,8,9,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t creepster_caps_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
