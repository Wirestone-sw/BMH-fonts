// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmex10_8

#include "font.h"
#include "jsmath-cmex10_8.h"

// '0'
static const uint8_t bitmap_48[] = {128};
// '1'
static const uint8_t bitmap_49[] = {128};
// '2'
static const uint8_t bitmap_50[] = {128,128,128};
// '3'
static const uint8_t bitmap_51[] = {128,128};
// '4'
static const uint8_t bitmap_52[] = {128};
// '5'
static const uint8_t bitmap_53[] = {128};
// '6'
static const uint8_t bitmap_54[] = {128};
// '7'
static const uint8_t bitmap_55[] = {128};
// '8'
static const uint8_t bitmap_56[] = {128,128};
// '9'
static const uint8_t bitmap_57[] = {128};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {1,1,3,2,1,1,1,1,2,1,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmex10_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
