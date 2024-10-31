// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rochester_regular_12

#include "font.h"
#include "rochester_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,16,16,16,112,128};
// '1'
static const uint8_t bitmap_49[] = {32,32,240};
// '2'
static const uint8_t bitmap_50[] = {224,16,144,16,224};
// '3'
static const uint8_t bitmap_51[] = {96,144,16,144,96};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,96,16,128};
// '5'
static const uint8_t bitmap_53[] = {96,144,144,144,16,0};
// '6'
static const uint8_t bitmap_54[] = {192,32,144,144,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,208,48,16};
// '8'
static const uint8_t bitmap_56[] = {0,224,16,16,224,0};
// '9'
static const uint8_t bitmap_57[] = {240,16,16,16,224};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {6,3,5,5,6,6,5,6,6,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rochester_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
