// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font maiden_orange_regular_8

#include "font.h"
#include "maiden_orange_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {30,33,33,30};
// '1'
static const uint8_t bitmap_49[] = {33,62};
// '2'
static const uint8_t bitmap_50[] = {51,41,63};
// '3'
static const uint8_t bitmap_51[] = {19,41,63};
// '4'
static const uint8_t bitmap_52[] = {12,50,63};
// '5'
static const uint8_t bitmap_53[] = {22,37,59};
// '6'
static const uint8_t bitmap_54[] = {30,37,58};
// '7'
static const uint8_t bitmap_55[] = {3,57,6};
// '8'
static const uint8_t bitmap_56[] = {22,41,46,16};
// '9'
static const uint8_t bitmap_57[] = {22,41,62};
// ':'
static const uint8_t bitmap_58[] = {36};

static const uint8_t char_width[] = {4,2,3,3,3,3,3,3,4,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t maiden_orange_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
