// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font homemade_apple_regular_20

#include "font.h"
#include "homemade_apple_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,192,192,64,192,128};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,128,192};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,128,192,192,192,64,192,64};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,128,128,192,192,192,192,192,64};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,96};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,128,0,0,128,128,192,64,32};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,128,128,64};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,64,192,192,192,192,192,192,192};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,128,224,96,32,96,96,224,128,224};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,128,128,64,96,192};
// ':'
static const uint8_t bitmap_58[] = {};

static const uint8_t char_width[] = {9,4,9,8,10,10,6,8,9,9,-15};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t homemade_apple_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
