// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_italic_8

#include "font.h"
#include "roboto_condensed_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {112,136,228,24};
// '1'
static const uint8_t bitmap_49[] = {232,28};
// '2'
static const uint8_t bitmap_50[] = {136,196,180,8};
// '3'
static const uint8_t bitmap_51[] = {200,164,244,8};
// '4'
static const uint8_t bitmap_52[] = {96,80,248,68};
// '5'
static const uint8_t bitmap_53[] = {64,156,244,4};
// '6'
static const uint8_t bitmap_54[] = {112,168,244};
// '7'
static const uint8_t bitmap_55[] = {128,68,52,12};
// '8'
static const uint8_t bitmap_56[] = {64,184,244,8};
// '9'
static const uint8_t bitmap_57[] = {188,100,24};
// ':'
static const uint8_t bitmap_58[] = {72,8};

static const uint8_t char_width[] = {4,2,4,4,4,4,3,4,4,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
