// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font fontdiner_swanky_regular_12

#include "font.h"
#include "fontdiner_swanky_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,224,96,32,32,96,224,192};
// '1'
static const uint8_t bitmap_49[] = {16,16,240,240,240};
// '2'
static const uint8_t bitmap_50[] = {240,48,16,16,16,240,224};
// '3'
static const uint8_t bitmap_51[] = {224,48,16,16,176,224,64};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,224,248,0,0};
// '5'
static const uint8_t bitmap_53[] = {224,224,96,32,32,32,224,16};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,96,96,96,248,0};
// '7'
static const uint8_t bitmap_55[] = {16,240,16,16,16,240,240,112};
// '8'
static const uint8_t bitmap_56[] = {0,224,240,16,16,48,240,224};
// '9'
static const uint8_t bitmap_57[] = {224,240,48,16,16,48,224,192};
// ':'
static const uint8_t bitmap_58[] = {0,0,0};

static const uint8_t char_width[] = {9,5,7,7,8,8,8,8,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t fontdiner_swanky_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
