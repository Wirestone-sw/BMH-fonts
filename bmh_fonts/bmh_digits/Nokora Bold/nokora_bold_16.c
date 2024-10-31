// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_bold_16

#include "font.h"
#include "nokora_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {240,248,56,24,24,248,240,192,31,127,112,96,96,127,63,15};
// '1'
static const uint8_t bitmap_49[] = {96,96,48,248,248,248,0,0,0,127,127,127};
// '2'
static const uint8_t bitmap_50[] = {16,56,24,24,24,248,240,0,112,120,124,110,103,99,97,96};
// '3'
static const uint8_t bitmap_51[] = {0,24,24,24,24,152,248,240,0,112,96,99,99,99,99,126,62,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,224,112,248,248,248,0,12,15,15,13,12,127,127,127,12};
// '5'
static const uint8_t bitmap_53[] = {248,248,248,152,152,24,24,0,97,97,97,97,99,127,63,12};
// '6'
static const uint8_t bitmap_54[] = {224,240,56,152,152,152,24,0,31,63,115,97,97,127,63,30};
// '7'
static const uint8_t bitmap_55[] = {24,24,24,24,24,216,248,248,24,0,0,96,120,126,15,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {112,248,216,152,152,248,240,0,60,126,99,99,99,126,62,24};
// '9'
static const uint8_t bitmap_57[] = {240,248,24,24,24,248,240,192,99,103,103,102,115,61,31,7};
// ':'
static const uint8_t bitmap_58[] = {192,192,192,96,112,96};

static const uint8_t char_width[] = {8,6,8,9,9,8,8,9,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t nokora_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
