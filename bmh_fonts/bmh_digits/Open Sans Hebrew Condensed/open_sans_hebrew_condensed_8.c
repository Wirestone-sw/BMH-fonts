// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_8

#include "font.h"
#include "open_sans_hebrew_condensed_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,132,248};
// '1'
static const uint8_t bitmap_49[] = {252};
// '2'
static const uint8_t bitmap_50[] = {132,228,152};
// '3'
static const uint8_t bitmap_51[] = {132,164,248};
// '4'
static const uint8_t bitmap_52[] = {96,88,252};
// '5'
static const uint8_t bitmap_53[] = {152,148,228};
// '6'
static const uint8_t bitmap_54[] = {120,148,228};
// '7'
static const uint8_t bitmap_55[] = {4,228,28};
// '8'
static const uint8_t bitmap_56[] = {232,148,252};
// '9'
static const uint8_t bitmap_57[] = {24,164,120};
// ':'
static const uint8_t bitmap_58[] = {72};

static const uint8_t char_width[] = {3,1,3,3,3,3,3,3,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
