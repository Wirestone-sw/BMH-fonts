// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_bold_italic_8

#include "font.h"
#include "open_sans_hebrew_condensed_bold_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {224,48,232,48};
// '1'
static const uint8_t bitmap_49[] = {16,248};
// '2'
static const uint8_t bitmap_50[] = {216,120,16};
// '3'
static const uint8_t bitmap_51[] = {72,248,16};
// '4'
static const uint8_t bitmap_52[] = {160,248,8};
// '5'
static const uint8_t bitmap_53[] = {56,232,8};
// '6'
static const uint8_t bitmap_54[] = {224,80,232,8};
// '7'
static const uint8_t bitmap_55[] = {200,104,24};
// '8'
static const uint8_t bitmap_56[] = {120,232,16};
// '9'
static const uint8_t bitmap_57[] = {88,232,48};
// ':'
static const uint8_t bitmap_58[] = {128,16};

static const uint8_t char_width[] = {4,2,3,3,3,3,4,3,3,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_bold_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
