// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_extra_bold_italic_12

#include "font.h"
#include "open_sans_hebrew_condensed_extra_bold_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,240,48,240,240};
// '1'
static const uint8_t bitmap_49[] = {64,96,240,240,16};
// '2'
static const uint8_t bitmap_50[] = {0,32,48,144,240,240};
// '3'
static const uint8_t bitmap_51[] = {16,176,144,240,112};
// '4'
static const uint8_t bitmap_52[] = {128,192,240,240,112};
// '5'
static const uint8_t bitmap_53[] = {224,240,176,144,16};
// '6'
static const uint8_t bitmap_54[] = {0,192,240,176,144,16};
// '7'
static const uint8_t bitmap_55[] = {16,16,144,240,112,16};
// '8'
static const uint8_t bitmap_56[] = {224,240,144,240,112};
// '9'
static const uint8_t bitmap_57[] = {224,240,16,240,240};
// ':'
static const uint8_t bitmap_58[] = {192,192};

static const uint8_t char_width[] = {6,5,6,5,5,5,6,6,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_extra_bold_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
