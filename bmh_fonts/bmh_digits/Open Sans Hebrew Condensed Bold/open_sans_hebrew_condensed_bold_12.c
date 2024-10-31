// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_bold_12

#include "font.h"
#include "open_sans_hebrew_condensed_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,240,16,16,240,128};
// '1'
static const uint8_t bitmap_49[] = {96,48,240,240};
// '2'
static const uint8_t bitmap_50[] = {16,48,16,176,240};
// '3'
static const uint8_t bitmap_51[] = {16,48,16,176,240};
// '4'
static const uint8_t bitmap_52[] = {0,128,224,240,240,0};
// '5'
static const uint8_t bitmap_53[] = {240,144,144,16};
// '6'
static const uint8_t bitmap_54[] = {0,224,176,144,144,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,208,240};
// '8'
static const uint8_t bitmap_56[] = {0,240,144,144,240,0};
// '9'
static const uint8_t bitmap_57[] = {192,240,16,16,240,128};
// ':'
static const uint8_t bitmap_58[] = {192,192};

static const uint8_t char_width[] = {6,4,5,5,6,4,6,4,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
