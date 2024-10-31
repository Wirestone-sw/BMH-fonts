// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_regular_8

#include "font.h"
#include "mountains_of_christmas_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {48,48,48};
// '1'
static const uint8_t bitmap_49[] = {32,240};
// '2'
static const uint8_t bitmap_50[] = {24,232,152};
// '3'
static const uint8_t bitmap_51[] = {64,216,104};
// '4'
static const uint8_t bitmap_52[] = {64,120,192};
// '5'
static const uint8_t bitmap_53[] = {112,80,128};
// '6'
static const uint8_t bitmap_54[] = {192,160,144};
// '7'
static const uint8_t bitmap_55[] = {16,208,48};
// '8'
static const uint8_t bitmap_56[] = {192,48,208};
// '9'
static const uint8_t bitmap_57[] = {32,80,224};
// ':'
static const uint8_t bitmap_58[] = {32};

static const uint8_t char_width[] = {3,2,3,3,3,3,3,3,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
