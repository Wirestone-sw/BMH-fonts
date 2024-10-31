// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_bold_italic_8

#include "font.h"
#include "roboto_condensed_bold_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {96,152,196,56};
// '1'
static const uint8_t bitmap_49[] = {200,124};
// '2'
static const uint8_t bitmap_50[] = {204,180,24};
// '3'
static const uint8_t bitmap_51[] = {192,172,244,24};
// '4'
static const uint8_t bitmap_52[] = {96,80,248,76};
// '5'
static const uint8_t bitmap_53[] = {64,156,244,36};
// '6'
static const uint8_t bitmap_54[] = {96,184,244,96};
// '7'
static const uint8_t bitmap_55[] = {128,196,52,12};
// '8'
static const uint8_t bitmap_56[] = {192,184,228,24};
// '9'
static const uint8_t bitmap_57[] = {184,100,56};
// ':'
static const uint8_t bitmap_58[] = {64,8};

static const uint8_t char_width[] = {4,2,3,4,4,4,4,4,4,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_bold_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
