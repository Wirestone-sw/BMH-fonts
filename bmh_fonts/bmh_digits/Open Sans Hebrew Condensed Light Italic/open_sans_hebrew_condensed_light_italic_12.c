// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_light_italic_12

#include "font.h"
#include "open_sans_hebrew_condensed_light_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,48,16,240};
// '1'
static const uint8_t bitmap_49[] = {32,240};
// '2'
static const uint8_t bitmap_50[] = {0,16,16,240};
// '3'
static const uint8_t bitmap_51[] = {16,144,112};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,32,240};
// '5'
static const uint8_t bitmap_53[] = {192,176,16,16};
// '6'
static const uint8_t bitmap_54[] = {192,160,144,16};
// '7'
static const uint8_t bitmap_55[] = {0,16,144,112,16};
// '8'
static const uint8_t bitmap_56[] = {0,96,144,144,112};
// '9'
static const uint8_t bitmap_57[] = {224,16,16,240};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {4,2,4,3,5,4,4,5,5,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_light_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
