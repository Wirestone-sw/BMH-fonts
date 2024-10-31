// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rancho_regular_8

#include "font.h"
#include "rancho_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,132,196,56};
// '1'
static const uint8_t bitmap_49[] = {252};
// '2'
static const uint8_t bitmap_50[] = {204,164,156};
// '3'
static const uint8_t bitmap_51[] = {68,148,92,32};
// '4'
static const uint8_t bitmap_52[] = {44,252,32};
// '5'
static const uint8_t bitmap_53[] = {92,148,84,32};
// '6'
static const uint8_t bitmap_54[] = {120,148,148,96};
// '7'
static const uint8_t bitmap_55[] = {4,244,12};
// '8'
static const uint8_t bitmap_56[] = {108,148,252};
// '9'
static const uint8_t bitmap_57[] = {28,164,124};
// ':'
static const uint8_t bitmap_58[] = {96};

static const uint8_t char_width[] = {4,1,3,4,3,4,4,3,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rancho_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
