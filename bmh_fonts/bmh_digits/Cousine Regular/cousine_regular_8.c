// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_regular_8

#include "font.h"
#include "cousine_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {28,34,42,62};
// '1'
static const uint8_t bitmap_49[] = {34,62,32};
// '2'
static const uint8_t bitmap_50[] = {50,42,38};
// '3'
static const uint8_t bitmap_51[] = {34,42,62};
// '4'
static const uint8_t bitmap_52[] = {16,28,18,62};
// '5'
static const uint8_t bitmap_53[] = {38,38,56};
// '6'
static const uint8_t bitmap_54[] = {62,38,58};
// '7'
static const uint8_t bitmap_55[] = {34,26,6};
// '8'
static const uint8_t bitmap_56[] = {62,42,62};
// '9'
static const uint8_t bitmap_57[] = {46,42,62};
// ':'
static const uint8_t bitmap_58[] = {36};

static const uint8_t char_width[] = {4,3,3,3,4,3,3,3,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
