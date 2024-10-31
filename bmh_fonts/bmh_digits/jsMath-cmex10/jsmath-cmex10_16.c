// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmex10_16

#include "font.h"
#include "jsmath-cmex10_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,32,64,128};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,224,224,96,96,96,96};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,96,96,96,224,224};
// '4'
static const uint8_t bitmap_52[] = {0,0,224,224};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,192,192};
// '7'
static const uint8_t bitmap_55[] = {0,0,192,192};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,64,192,128};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192};

static const uint8_t char_width[] = {1,3,6,5,2,2,2,2,2,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmex10_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
