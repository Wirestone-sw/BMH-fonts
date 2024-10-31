// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_bold_8

#include "font.h"
#include "roboto_slab_bold_8.h"

// '0'
static const uint8_t bitmap_48[] = {112,252,4,252};
// '1'
static const uint8_t bitmap_49[] = {8,252};
// '2'
static const uint8_t bitmap_50[] = {8,132,100,184};
// '3'
static const uint8_t bitmap_51[] = {136,36,36,220};
// '4'
static const uint8_t bitmap_52[] = {64,112,76,252};
// '5'
static const uint8_t bitmap_53[] = {160,60,36,228};
// '6'
static const uint8_t bitmap_54[] = {112,252,36,228};
// '7'
static const uint8_t bitmap_55[] = {12,132,244,12};
// '8'
static const uint8_t bitmap_56[] = {216,60,36,220};
// '9'
static const uint8_t bitmap_57[] = {56,108,68,248};
// ':'
static const uint8_t bitmap_58[] = {32};

static const uint8_t char_width[] = {4,2,4,4,4,4,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};