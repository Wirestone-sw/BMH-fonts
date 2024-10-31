// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font syncopate_regular_8

#include "font.h"
#include "syncopate_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {28,34,34,34,34,30};
// '1'
static const uint8_t bitmap_49[] = {2,62};
// '2'
static const uint8_t bitmap_50[] = {34,34,50,50,46};
// '3'
static const uint8_t bitmap_51[] = {34,34,42,42,62};
// '4'
static const uint8_t bitmap_52[] = {16,24,22,18,62,16};
// '5'
static const uint8_t bitmap_53[] = {38,42,42,42,58};
// '6'
static const uint8_t bitmap_54[] = {62,42,42,42,24};
// '7'
static const uint8_t bitmap_55[] = {2,34,26,6,2};
// '8'
static const uint8_t bitmap_56[] = {18,46,42,42,46,20};
// '9'
static const uint8_t bitmap_57[] = {38,42,50,50,58,12};
// ':'
static const uint8_t bitmap_58[] = {72};

static const uint8_t char_width[] = {6,2,5,5,6,5,5,5,6,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t syncopate_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
