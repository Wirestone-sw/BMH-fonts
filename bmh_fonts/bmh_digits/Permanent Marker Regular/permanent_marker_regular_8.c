// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font permanent_marker_regular_8

#include "font.h"
#include "permanent_marker_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {224,176,152,220,112};
// '1'
static const uint8_t bitmap_49[] = {128,248};
// '2'
static const uint8_t bitmap_50[] = {128,216,120,184,144,128};
// '3'
static const uint8_t bitmap_51[] = {120,248,216};
// '4'
static const uint8_t bitmap_52[] = {8,48,240,60,16};
// '5'
static const uint8_t bitmap_53[] = {160,112,216,144,16};
// '6'
static const uint8_t bitmap_54[] = {176,216,128};
// '7'
static const uint8_t bitmap_55[] = {88,88,216,112,64};
// '8'
static const uint8_t bitmap_56[] = {16,248,248,40,16};
// '9'
static const uint8_t bitmap_57[] = {32,48,184,112};
// ':'
static const uint8_t bitmap_58[] = {32};

static const uint8_t char_width[] = {5,2,6,3,5,5,3,5,5,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t permanent_marker_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
