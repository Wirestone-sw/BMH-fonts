// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font sunshiney_regular_8

#include "font.h"
#include "sunshiney_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {56,68,68,68,56};
// '1'
static const uint8_t bitmap_49[] = {124};
// '2'
static const uint8_t bitmap_50[] = {136,228,152,128};
// '3'
static const uint8_t bitmap_51[] = {100,108,76,48};
// '4'
static const uint8_t bitmap_52[] = {48,40,252};
// '5'
static const uint8_t bitmap_53[] = {252,212,96};
// '6'
static const uint8_t bitmap_54[] = {96,248,212,224};
// '7'
static const uint8_t bitmap_55[] = {4,100,28,4};
// '8'
static const uint8_t bitmap_56[] = {32,92,76,52};
// '9'
static const uint8_t bitmap_57[] = {28,92,44,28};
// ':'
static const uint8_t bitmap_58[] = {160};

static const uint8_t char_width[] = {5,1,4,4,3,3,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t sunshiney_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
