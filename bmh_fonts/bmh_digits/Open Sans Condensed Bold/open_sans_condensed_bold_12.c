// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_bold_12

#include "font.h"
#include "open_sans_condensed_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,32,32,192,0};
// '1'
static const uint8_t bitmap_49[] = {192,64,224,224};
// '2'
static const uint8_t bitmap_50[] = {96,32,96,224};
// '3'
static const uint8_t bitmap_51[] = {32,32,96,192};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,224,224,0};
// '5'
static const uint8_t bitmap_53[] = {224,32,32,32};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,32,32,0};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,160,224};
// '8'
static const uint8_t bitmap_56[] = {0,224,32,32,224,0};
// '9'
static const uint8_t bitmap_57[] = {128,224,32,32,192};
// ':'
static const uint8_t bitmap_58[] = {128,128};

static const uint8_t char_width[] = {6,4,4,4,6,4,6,5,6,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
