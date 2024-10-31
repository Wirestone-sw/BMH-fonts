// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font slackey_regular_8

#include "font.h"
#include "slackey_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {112,248,8,8,248};
// '1'
static const uint8_t bitmap_49[] = {16,248,224};
// '2'
static const uint8_t bitmap_50[] = {12,236,228,220,200};
// '3'
static const uint8_t bitmap_51[] = {152,216,248,248,216};
// '4'
static const uint8_t bitmap_52[] = {120,120,96,248,56};
// '5'
static const uint8_t bitmap_53[] = {128,248,72,72,200};
// '6'
static const uint8_t bitmap_54[] = {192,248,72,88,216};
// '7'
static const uint8_t bitmap_55[] = {24,24,200,120,24};
// '8'
static const uint8_t bitmap_56[] = {248,72,72,248};
// '9'
static const uint8_t bitmap_57[] = {24,188,164,164,252};
// ':'
static const uint8_t bitmap_58[] = {160,160};

static const uint8_t char_width[] = {5,3,5,5,5,5,5,5,4,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t slackey_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
