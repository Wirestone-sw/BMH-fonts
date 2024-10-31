// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_extra_bold_8

#include "font.h"
#include "open_sans_hebrew_condensed_extra_bold_8.h"

// '0'
static const uint8_t bitmap_48[] = {240,248,248,224};
// '1'
static const uint8_t bitmap_49[] = {48,16,248};
// '2'
static const uint8_t bitmap_50[] = {16,216,120,16};
// '3'
static const uint8_t bitmap_51[] = {16,72,248,144};
// '4'
static const uint8_t bitmap_52[] = {192,176,248,128};
// '5'
static const uint8_t bitmap_53[] = {112,56,232,128};
// '6'
static const uint8_t bitmap_54[] = {224,248,232,192};
// '7'
static const uint8_t bitmap_55[] = {8,200,248,8};
// '8'
static const uint8_t bitmap_56[] = {144,248,248,144};
// '9'
static const uint8_t bitmap_57[] = {48,120,248,96};
// ':'
static const uint8_t bitmap_58[] = {144,144};

static const uint8_t char_width[] = {4,3,4,4,4,4,4,4,4,4,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_extra_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
