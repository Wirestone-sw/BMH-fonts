// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_regular_20

#include "font.h"
#include "cousine_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,96,96,96,96,96,192,128,0,60,255,129,0,28,28,28,0,129,255,60};
// '1'
static const uint8_t bitmap_49[] = {128,128,128,192,192,224,224,0,0,0,0,1,1,0,0,0,255,255,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {128,192,96,96,96,96,96,192,192,1,129,192,96,96,48,24,15,7};
// '3'
static const uint8_t bitmap_51[] = {0,128,192,96,96,96,96,96,192,192,0,128,129,1,0,24,24,24,28,55,227,192};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,224,224,224,0,0,224,240,216,206,195,193,192,255,255,192,192};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,96,96,96,96,96,96,96,0,128,159,31,8,12,12,12,12,184,248,96};
// '6'
static const uint8_t bitmap_54[] = {0,192,192,96,96,96,96,192,192,0,255,255,8,12,12,12,12,152,248,96};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,224,0,0,0,224,248,30,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,96,96,32,96,96,192,128,0,192,231,55,28,24,8,24,28,55,231,192};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,96,96,96,96,96,192,128,2,31,29,48,48,48,48,16,239,255};
// ':'
static const uint8_t bitmap_58[] = {128,128,128,3,3,3};

static const uint8_t char_width[] = {11,11,9,11,11,11,10,9,11,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
