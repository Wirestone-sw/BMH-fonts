// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font just_another_hand_regular_8

#include "font.h"
#include "just_another_hand_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {62,63};
// '1'
static const uint8_t bitmap_49[] = {31};
// '2'
static const uint8_t bitmap_50[] = {25,23};
// '3'
static const uint8_t bitmap_51[] = {35,62};
// '4'
static const uint8_t bitmap_52[] = {62};
// '5'
static const uint8_t bitmap_53[] = {17,31};
// '6'
static const uint8_t bitmap_54[] = {63,60};
// '7'
static const uint8_t bitmap_55[] = {3};
// '8'
static const uint8_t bitmap_56[] = {62,63};
// '9'
static const uint8_t bitmap_57[] = {15,62};
// ':'
static const uint8_t bitmap_58[] = {40};

static const uint8_t char_width[] = {2,1,2,2,1,2,2,1,2,2,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t just_another_hand_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
