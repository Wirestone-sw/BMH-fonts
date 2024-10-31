// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_12

#include "font.h"
#include "tinos_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {240,24,8,24,240};
// '1'
static const uint8_t bitmap_49[] = {16,16,248,248,0};
// '2'
static const uint8_t bitmap_50[] = {24,8,8,248,112};
// '3'
static const uint8_t bitmap_51[] = {24,136,136,248,112,0};
// '4'
static const uint8_t bitmap_52[] = {0,128,64,48,248,248,0};
// '5'
static const uint8_t bitmap_53[] = {120,72,72,200,136};
// '6'
static const uint8_t bitmap_54[] = {128,240,88,72,200,216,0};
// '7'
static const uint8_t bitmap_55[] = {24,8,8,200,56,8};
// '8'
static const uint8_t bitmap_56[] = {0,112,248,136,248,112,0};
// '9'
static const uint8_t bitmap_57[] = {96,240,8,8,24,240};
// ':'
static const uint8_t bitmap_58[] = {192,192};

static const uint8_t char_width[] = {5,5,5,6,7,5,7,6,7,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
