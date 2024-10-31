// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_black_italic_8

#include "font.h"
#include "roboto_black_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {96,248,132,124};
// '1'
static const uint8_t bitmap_49[] = {136,248,12};
// '2'
static const uint8_t bitmap_50[] = {200,164,156};
// '3'
static const uint8_t bitmap_51[] = {192,140,164,252};
// '4'
static const uint8_t bitmap_52[] = {64,112,232,124};
// '5'
static const uint8_t bitmap_53[] = {96,156,148,100,4};
// '6'
static const uint8_t bitmap_54[] = {96,248,156,244};
// '7'
static const uint8_t bitmap_55[] = {128,196,116,28,4};
// '8'
static const uint8_t bitmap_56[] = {64,248,164,252};
// '9'
static const uint8_t bitmap_57[] = {184,228,124};
// ':'
static const uint8_t bitmap_58[] = {64,72};

static const uint8_t char_width[] = {4,3,3,4,4,5,4,5,4,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_black_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
