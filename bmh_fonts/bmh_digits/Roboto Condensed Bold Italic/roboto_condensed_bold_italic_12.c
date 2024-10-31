// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_bold_italic_12

#include "font.h"
#include "roboto_condensed_bold_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,240,56,8,248,240};
// '1'
static const uint8_t bitmap_49[] = {64,32,240,240};
// '2'
static const uint8_t bitmap_50[] = {96,48,16,240,224};
// '3'
static const uint8_t bitmap_51[] = {16,152,136,120,112};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,96,240,240};
// '5'
static const uint8_t bitmap_53[] = {0,224,240,144,144,16};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,176,144,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,144,240,112,16};
// '8'
static const uint8_t bitmap_56[] = {0,176,120,72,248,48};
// '9'
static const uint8_t bitmap_57[] = {240,184,8,248,240};
// ':'
static const uint8_t bitmap_58[] = {192,192};

static const uint8_t char_width[] = {6,4,5,5,6,6,6,6,6,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_bold_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
