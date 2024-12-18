// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_condensed_12

#include "font.h"
#include "open_sans_hebrew_condensed_12.h"

// '0'
static const uint8_t bitmap_48[] = {248,8,8,240};
// '1'
static const uint8_t bitmap_49[] = {16,8,248};
// '2'
static const uint8_t bitmap_50[] = {0,8,8,200,48};
// '3'
static const uint8_t bitmap_51[] = {8,136,136,200,48};
// '4'
static const uint8_t bitmap_52[] = {0,192,48,248,0};
// '5'
static const uint8_t bitmap_53[] = {120,72,136,128};
// '6'
static const uint8_t bitmap_54[] = {240,72,72,136};
// '7'
static const uint8_t bitmap_55[] = {8,8,8,232,24};
// '8'
static const uint8_t bitmap_56[] = {0,248,136,200,56};
// '9'
static const uint8_t bitmap_57[] = {32,216,8,136,240};
// ':'
static const uint8_t bitmap_58[] = {192};

static const uint8_t char_width[] = {4,3,5,5,5,4,4,5,5,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_condensed_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
