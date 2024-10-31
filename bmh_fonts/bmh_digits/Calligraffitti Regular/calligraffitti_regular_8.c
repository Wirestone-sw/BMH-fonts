// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font calligraffitti_regular_8

#include "font.h"
#include "calligraffitti_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {248,132,124};
// '1'
static const uint8_t bitmap_49[] = {192,52,12};
// '2'
static const uint8_t bitmap_50[] = {96,88,148,140,64};
// '3'
static const uint8_t bitmap_51[] = {64,136,148,84,60};
// '4'
static const uint8_t bitmap_52[] = {32,48,236,16,24};
// '5'
static const uint8_t bitmap_53[] = {140,139,73,49,1};
// '6'
static const uint8_t bitmap_54[] = {248,148,112};
// '7'
static const uint8_t bitmap_55[] = {98,26,6,2};
// '8'
static const uint8_t bitmap_56[] = {112,76,62,2};
// '9'
static const uint8_t bitmap_57[] = {184,164,124};
// ':'
static const uint8_t bitmap_58[] = {192};

static const uint8_t char_width[] = {3,3,5,5,5,5,3,4,4,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t calligraffitti_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
