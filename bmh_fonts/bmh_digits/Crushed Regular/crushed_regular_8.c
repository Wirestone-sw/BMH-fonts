// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crushed_regular_8

#include "font.h"
#include "crushed_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {60,68,124};
// '1'
static const uint8_t bitmap_49[] = {124};
// '2'
static const uint8_t bitmap_50[] = {68,116,76};
// '3'
static const uint8_t bitmap_51[] = {68,84,108};
// '4'
static const uint8_t bitmap_52[] = {48,44,124};
// '5'
static const uint8_t bitmap_53[] = {76,76,112};
// '6'
static const uint8_t bitmap_54[] = {60,76,116};
// '7'
static const uint8_t bitmap_55[] = {68,60,4};
// '8'
static const uint8_t bitmap_56[] = {124,84,124};
// '9'
static const uint8_t bitmap_57[] = {92,84,124};
// ':'
static const uint8_t bitmap_58[] = {80};

static const uint8_t char_width[] = {3,1,3,3,3,3,3,3,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crushed_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
