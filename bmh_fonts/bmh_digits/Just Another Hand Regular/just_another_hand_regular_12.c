// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font just_another_hand_regular_12

#include "font.h"
#include "just_another_hand_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {252,2,252};
// '1'
static const uint8_t bitmap_49[] = {254};
// '2'
static const uint8_t bitmap_50[] = {12,226,62};
// '3'
static const uint8_t bitmap_51[] = {18,30,224};
// '4'
static const uint8_t bitmap_52[] = {96,92,254,64};
// '5'
static const uint8_t bitmap_53[] = {5,248};
// '6'
static const uint8_t bitmap_54[] = {248,22,224};
// '7'
static const uint8_t bitmap_55[] = {194,62};
// '8'
static const uint8_t bitmap_56[] = {254,18,236};
// '9'
static const uint8_t bitmap_57[] = {62,66,252};
// ':'
static const uint8_t bitmap_58[] = {32};

static const uint8_t char_width[] = {3,1,3,3,4,2,3,2,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t just_another_hand_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
