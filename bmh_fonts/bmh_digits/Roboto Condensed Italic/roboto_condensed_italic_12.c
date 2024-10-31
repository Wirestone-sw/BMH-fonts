// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_italic_12

#include "font.h"
#include "roboto_condensed_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,24,8,136,240};
// '1'
static const uint8_t bitmap_49[] = {32,208,48};
// '2'
static const uint8_t bitmap_50[] = {48,8,136,216,48};
// '3'
static const uint8_t bitmap_51[] = {0,16,136,136,88,48};
// '4'
static const uint8_t bitmap_52[] = {0,128,96,240,16};
// '5'
static const uint8_t bitmap_53[] = {128,240,144,144,16};
// '6'
static const uint8_t bitmap_54[] = {192,224,144,144};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,208,48,16};
// '8'
static const uint8_t bitmap_56[] = {0,96,216,136,72,48};
// '9'
static const uint8_t bitmap_57[] = {240,24,8,216,96};
// ':'
static const uint8_t bitmap_58[] = {0,32};

static const uint8_t char_width[] = {5,3,5,6,5,5,4,6,6,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
