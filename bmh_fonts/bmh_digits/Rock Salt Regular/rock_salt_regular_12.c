// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rock_salt_regular_12

#include "font.h"
#include "rock_salt_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,128,128};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {};

static const uint8_t char_width[] = {5,1,4,6,7,8,5,8,6,4,-9};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rock_salt_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
