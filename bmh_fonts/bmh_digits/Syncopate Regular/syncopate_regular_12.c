// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font syncopate_regular_12

#include "font.h"
#include "syncopate_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {248,4,2,2,2,2,2,4};
// '1'
static const uint8_t bitmap_49[] = {2,2,254};
// '2'
static const uint8_t bitmap_50[] = {4,2,2,130,66,34,28};
// '3'
static const uint8_t bitmap_51[] = {4,2,34,34,34,34,220};
// '4'
static const uint8_t bitmap_52[] = {192,160,144,136,132,130,254,128};
// '5'
static const uint8_t bitmap_53[] = {62,34,34,34,34,34,66,128};
// '6'
static const uint8_t bitmap_54[] = {248,36,18,18,18,18,34,192};
// '7'
static const uint8_t bitmap_55[] = {2,2,2,130,66,50,14,2};
// '8'
static const uint8_t bitmap_56[] = {128,76,82,34,34,82,76,128};
// '9'
static const uint8_t bitmap_57[] = {24,36,66,66,66,66,36,248};
// ':'
static const uint8_t bitmap_58[] = {16};

static const uint8_t char_width[] = {8,3,7,7,8,8,8,8,8,8,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t syncopate_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
