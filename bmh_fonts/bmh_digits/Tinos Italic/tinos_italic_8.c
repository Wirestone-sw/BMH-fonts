// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_italic_8

#include "font.h"
#include "tinos_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,68,68,60};
// '1'
static const uint8_t bitmap_49[] = {100,28};
// '2'
static const uint8_t bitmap_50[] = {64,96,84,12};
// '3'
static const uint8_t bitmap_51[] = {64,84,44};
// '4'
static const uint8_t bitmap_52[] = {48,40,116,44};
// '5'
static const uint8_t bitmap_53[] = {72,84,84,32};
// '6'
static const uint8_t bitmap_54[] = {120,84,84,48};
// '7'
static const uint8_t bitmap_55[] = {100,20,12};
// '8'
static const uint8_t bitmap_56[] = {96,92,84,44};
// '9'
static const uint8_t bitmap_57[] = {72,84,84,60};
// ':'
static const uint8_t bitmap_58[] = {16};

static const uint8_t char_width[] = {4,2,4,3,4,4,4,3,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
