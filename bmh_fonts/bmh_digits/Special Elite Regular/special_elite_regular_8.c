// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font special_elite_regular_8

#include "font.h"
#include "special_elite_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {28,35,33,62};
// '1'
static const uint8_t bitmap_49[] = {33,33,63,32,32};
// '2'
static const uint8_t bitmap_50[] = {25,23,21,19};
// '3'
static const uint8_t bitmap_51[] = {18,37,39,57};
// '4'
static const uint8_t bitmap_52[] = {24,20,50,61,48};
// '5'
static const uint8_t bitmap_53[] = {18,37,37,24};
// '6'
static const uint8_t bitmap_54[] = {28,42,37,58};
// '7'
static const uint8_t bitmap_55[] = {3,1,57,7};
// '8'
static const uint8_t bitmap_56[] = {26,37,37,62};
// '9'
static const uint8_t bitmap_57[] = {22,57,41,30};
// ':'
static const uint8_t bitmap_58[] = {8,26};

static const uint8_t char_width[] = {4,5,4,4,5,4,4,4,4,4,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t special_elite_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
