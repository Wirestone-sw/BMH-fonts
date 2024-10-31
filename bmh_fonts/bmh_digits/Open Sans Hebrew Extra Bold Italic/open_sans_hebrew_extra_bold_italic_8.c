// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_extra_bold_italic_8

#include "font.h"
#include "open_sans_hebrew_extra_bold_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {224,240,152,248,32};
// '1'
static const uint8_t bitmap_49[] = {48,240,120};
// '2'
static const uint8_t bitmap_50[] = {152,88,56};
// '3'
static const uint8_t bitmap_51[] = {128,120,104,248};
// '4'
static const uint8_t bitmap_52[] = {224,240,248,8};
// '5'
static const uint8_t bitmap_53[] = {128,120,248,216,8};
// '6'
static const uint8_t bitmap_54[] = {192,240,56,232,24};
// '7'
static const uint8_t bitmap_55[] = {152,248,56,24};
// '8'
static const uint8_t bitmap_56[] = {128,240,104,248,16};
// '9'
static const uint8_t bitmap_57[] = {32,120,200,248};
// ':'
static const uint8_t bitmap_58[] = {128,144};

static const uint8_t char_width[] = {5,3,3,4,4,5,5,4,5,4,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_extra_bold_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
