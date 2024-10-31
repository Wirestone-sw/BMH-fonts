// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmti10_8

#include "font.h"
#include "jsmath-cmti10_8.h"

// '0'
static const uint8_t bitmap_48[] = {56,70,50,14};
// '1'
static const uint8_t bitmap_49[] = {64,120,4};
// '2'
static const uint8_t bitmap_50[] = {72,108,84,76};
// '3'
static const uint8_t bitmap_51[] = {64,92,52,12};
// '4'
static const uint8_t bitmap_52[] = {128,96,248,132};
// '5'
static const uint8_t bitmap_53[] = {44,42,58,2};
// '6'
static const uint8_t bitmap_54[] = {120,148,116,4};
// '7'
static const uint8_t bitmap_55[] = {8,100,28,4};
// '8'
static const uint8_t bitmap_56[] = {100,156,108};
// '9'
static const uint8_t bitmap_57[] = {216,100,60};
// ':'
static const uint8_t bitmap_58[] = {40};

static const uint8_t char_width[] = {4,3,4,4,4,4,4,4,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmti10_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
