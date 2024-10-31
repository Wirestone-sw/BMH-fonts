// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cherry_cream_soda_regular_16

#include "font.h"
#include "cherry_cream_soda_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,192,224,96,96,96,96,96,96,30,127,127,225,192,192,128,128,128,128,128,128};
// '1'
static const uint8_t bitmap_49[] = {96,96,96,224,224,32,0,0,0,255,255,0};
// '2'
static const uint8_t bitmap_50[] = {128,192,224,112,48,48,48,48,48,96,224,131,131,131,192,192,224,160,176,152,156,143};
// '3'
static const uint8_t bitmap_51[] = {0,128,192,224,112,48,48,48,48,48,112,224,56,120,248,192,128,128,140,140,140,142,222,255};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,224,112,240,240,16,24,28,30,31,27,25,25,24,24,255,255,24};
// '5'
static const uint8_t bitmap_53[] = {0,240,240,240,176,176,176,176,176,176,48,56,121,121,225,192,192,192,192,192,225,115};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,192,96,96,32,48,48,32,60,126,255,199,199,131,131,131,131,131,199,198};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,48,48,48,48,176,240,112,0,64,192,240,120,28,14,7,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,96,32,32,32,32,32,96,192,112,248,249,199,199,130,130,130,130,198,199,255};
// '9'
static const uint8_t bitmap_57[] = {128,192,224,96,112,48,48,48,48,48,112,96,3,7,15,140,156,152,152,216,216,120,124,60};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,152,152,152};

static const uint8_t char_width[] = {12,6,11,12,12,11,12,11,12,12,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cherry_cream_soda_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
