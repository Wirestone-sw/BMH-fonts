// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font ultra_regular_8

#include "font.h"
#include "ultra_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {224,240,152,24,248,240};
// '1'
static const uint8_t bitmap_49[] = {16,248,248};
// '2'
static const uint8_t bitmap_50[] = {176,232,200,248,176};
// '3'
static const uint8_t bitmap_51[] = {144,248,72,120,248,144};
// '4'
static const uint8_t bitmap_52[] = {64,112,88,248,248,64};
// '5'
static const uint8_t bitmap_53[] = {128,248,56,248,232};
// '6'
static const uint8_t bitmap_54[] = {224,240,216,104,216,192};
// '7'
static const uint8_t bitmap_55[] = {56,152,216,120,24};
// '8'
static const uint8_t bitmap_56[] = {144,248,120,120,248,144};
// '9'
static const uint8_t bitmap_57[] = {176,248,72,248,240,96};
// ':'
static const uint8_t bitmap_58[] = {144,240};

static const uint8_t char_width[] = {6,3,5,6,6,5,6,5,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t ultra_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
