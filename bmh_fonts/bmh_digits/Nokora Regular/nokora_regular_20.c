// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_regular_20

#include "font.h"
#include "nokora_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,96,96,96,96,192,128,0,254,255,1,0,0,0,0,1,255,254};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,192,224,224,1,1,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {64,192,96,96,96,96,224,192,128,0,0,0,0,0,192,96,48,31,7,0};
// '3'
static const uint8_t bitmap_51[] = {192,192,96,96,96,96,224,192,128,0,0,0,48,48,48,48,40,111,199,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,224,224,0,0,128,224,176,156,134,129,128,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,192,224,96,96,96,96,96,96,0,0,31,31,24,24,24,24,56,240,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,192,192,224,96,96,96,96,0,252,255,51,24,24,24,24,56,240,224};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,96,224,224,0,0,0,0,128,224,124,31,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,224,96,96,96,224,192,128,128,199,111,56,16,16,48,104,239,199};
// '9'
static const uint8_t bitmap_57[] = {0,192,192,96,96,96,96,192,128,0,31,63,112,96,96,96,96,49,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,14,14,14};

static const uint8_t char_width[] = {10,6,10,10,11,10,10,10,10,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t nokora_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
