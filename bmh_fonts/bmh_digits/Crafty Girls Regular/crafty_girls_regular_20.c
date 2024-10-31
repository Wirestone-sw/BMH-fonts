// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crafty_girls_regular_20

#include "font.h"
#include "crafty_girls_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,128,128,128,128,0,0,0,248,12,3,1,0,0,0,1,3,6,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,128,32,32,48,24,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,128,128,128,128,0,0,60,98,1,0,0,0,0,1,131,126};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,128,64,64,64,64,128,0,0,12,7,193,160,160,224,224,64,97,158,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,0,0,0,0,192,0,0,128,128,128,192,192,112,79,64,64,128,128,255,128,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,64,64,64,64,64,64,64,64,0,63,16,8,8,8,24,48,240,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,128,128,128,128,0,240,12,194,67,33,32,32,32,65,135};
// '7'
static const uint8_t bitmap_55[] = {0,0,128,128,128,128,128,128,128,128,128,128,128,1,1,0,0,0,0,0,96,192,224,184,143,131};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,128,128,128,0,0,0,0,156,115,97,32,32,32,33,81,142,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,128,128,0,0,0,124,194,129,0,0,0,1,195,126,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,96,96};

static const uint8_t char_width[] = {11,5,10,11,14,10,10,13,11,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crafty_girls_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
