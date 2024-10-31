// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font ultra_regular_16

#include "font.h"
#include "ultra_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,224,224,96,224,224,224,192,128,14,127,255,255,255,192,128,192,255,255,255,127};
// '1'
static const uint8_t bitmap_49[] = {192,192,192,224,224,224,224,0,1,193,255,255,255,255,255,192};
// '2'
static const uint8_t bitmap_50[] = {128,192,224,96,96,96,224,224,224,224,192,0,129,227,243,251,216,252,238,207,207,199,247,49};
// '3'
static const uint8_t bitmap_51[] = {0,192,224,224,96,96,96,224,224,224,224,192,32,251,251,187,147,140,140,207,255,255,251,243};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,224,224,224,224,224,0,0,28,30,31,27,217,216,255,255,255,255,216,24};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,224,224,224,224,224,224,96,96,0,96,247,247,183,134,134,198,254,254,254,252,48};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,224,224,224,96,96,224,224,192,128,28,127,255,255,255,220,140,140,253,253,253,120};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,224,224,224,224,224,32,3,3,195,240,248,252,254,31,3,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,224,224,224,96,96,224,224,224,192,128,96,251,251,255,255,142,140,207,255,255,251,241};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,224,224,96,96,224,224,192,192,0,3,231,239,239,239,140,140,239,255,255,127,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,198,239,239,207};

static const uint8_t char_width[] = {12,8,12,12,12,12,12,11,12,12,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t ultra_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
