// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font ultra_regular_20

#include "font.h"
#include "ultra_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,192,192,192,192,192,192,192,128,0,0,64,252,255,255,255,255,255,3,1,3,255,255,255,255,255};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,128,128,128,0,30,30,255,255,255,255,255,255,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,192,192,192,192,192,192,192,128,128,0,0,14,31,31,159,157,201,193,225,243,255,255,127,127,63,30};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,128,192,192,192,192,192,192,192,192,128,128,0,0,143,159,223,159,157,1,97,97,243,255,255,255,223,159};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,128,128,128,128,128,0,0,192,224,240,248,188,158,143,255,255,255,255,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,192,192,192,192,192,192,192,192,192,192,192,192,192,64,0,127,255,255,191,51,59,59,123,251,243,243,243,225,128};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,192,192,192,192,192,192,128,128,0,64,252,254,255,255,255,231,225,113,112,254,239,239,239,199};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,192,128,128,192,192,192,15,15,15,15,131,195,231,247,255,255,63,31,7,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,128,192,192,192,192,192,192,192,192,128,128,0,0,142,159,255,255,255,255,97,97,243,255,255,255,223,159};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,192,192,192,192,192,192,192,128,128,0,0,8,63,127,255,255,255,225,225,225,127,255,255,255,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,96,240,248,248,240,96};

static const uint8_t char_width[] = {15,9,15,15,15,15,15,14,15,15,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t ultra_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};