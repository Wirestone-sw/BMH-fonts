// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font ultra_regular_12

#include "font.h"
#include "ultra_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,224,240,240,48,48,240,240,224};
// '1'
static const uint8_t bitmap_49[] = {96,96,240,240,240,0};
// '2'
static const uint8_t bitmap_50[] = {96,240,240,16,48,240,240,240,224};
// '3'
static const uint8_t bitmap_51[] = {0,240,240,80,16,176,240,240,240};
// '4'
static const uint8_t bitmap_52[] = {0,128,192,96,240,240,240,240,0};
// '5'
static const uint8_t bitmap_53[] = {0,240,240,176,176,176,176,176,16};
// '6'
static const uint8_t bitmap_54[] = {128,224,240,240,144,144,240,112,96};
// '7'
static const uint8_t bitmap_55[] = {112,112,48,48,176,240,240,48};
// '8'
static const uint8_t bitmap_56[] = {0,240,240,240,144,176,240,240,224};
// '9'
static const uint8_t bitmap_57[] = {192,240,240,176,16,240,240,240,224};
// ':'
static const uint8_t bitmap_58[] = {128,128,128};

static const uint8_t char_width[] = {9,6,9,9,9,9,9,8,9,9,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t ultra_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
