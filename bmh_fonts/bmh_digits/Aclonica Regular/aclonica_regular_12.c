// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font aclonica_regular_12

#include "font.h"
#include "aclonica_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {252,254,6,2,2,2,254,252};
// '1'
static const uint8_t bitmap_49[] = {2,254,254,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,132,206,194,66,98,54,62,28};
// '3'
static const uint8_t bitmap_51[] = {0,130,6,50,50,50,126,238,192};
// '4'
static const uint8_t bitmap_52[] = {128,240,248,140,132,254,254,254,128};
// '5'
static const uint8_t bitmap_53[] = {0,188,158,30,18,18,50,226,226};
// '6'
static const uint8_t bitmap_54[] = {248,252,54,18,18,18,242,230};
// '7'
static const uint8_t bitmap_55[] = {2,2,130,226,250,126,14,2};
// '8'
static const uint8_t bitmap_56[] = {236,254,62,50,50,54,254,236};
// '9'
static const uint8_t bitmap_57[] = {188,126,102,66,66,98,254,252};
// ':'
static const uint8_t bitmap_58[] = {96,112};

static const uint8_t char_width[] = {8,5,9,9,9,9,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t aclonica_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
