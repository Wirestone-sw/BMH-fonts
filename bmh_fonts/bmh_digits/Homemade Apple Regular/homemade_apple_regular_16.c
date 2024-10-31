// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font homemade_apple_regular_16

#include "font.h"
#include "homemade_apple_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,128,192,96,48,24,8,216,48};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,128,192,48,24};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,32,48,16,24,152,104,24};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,80,80,88,72,232,184};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,128,192,160,128,0,128,96,56,12};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,192,224,192,32,32,16,8};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,128,224,48,24,8};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,8,24,152,200,56,24};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,240,24,152,216,112,48,16};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,128,192,32,16,152,200,116,12};
// ':'
static const uint8_t bitmap_58[] = {};

static const uint8_t char_width[] = {8,4,7,6,9,7,5,6,7,8,-12};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t homemade_apple_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
