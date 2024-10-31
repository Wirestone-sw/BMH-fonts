// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rochester_regular_8

#include "font.h"
#include "rochester_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {248,8,240};
// '1'
static const uint8_t bitmap_49[] = {16,248};
// '2'
static const uint8_t bitmap_50[] = {144,104,72,56};
// '3'
static const uint8_t bitmap_51[] = {128,24,40,216};
// '4'
static const uint8_t bitmap_52[] = {64,96,152,224};
// '5'
static const uint8_t bitmap_53[] = {128,24,40,200};
// '6'
static const uint8_t bitmap_54[] = {224,80,40,192};
// '7'
static const uint8_t bitmap_55[] = {8,232,24,8};
// '8'
static const uint8_t bitmap_56[] = {128,88,40,216};
// '9'
static const uint8_t bitmap_57[] = {48,72,200,112};
// ':'
static const uint8_t bitmap_58[] = {64};

static const uint8_t char_width[] = {3,2,4,4,4,4,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rochester_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
