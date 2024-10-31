// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cherry_cream_soda_regular_8

#include "font.h"
#include "cherry_cream_soda_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,72,132,132,132,132};
// '1'
static const uint8_t bitmap_49[] = {4,252};
// '2'
static const uint8_t bitmap_50[] = {152,132,196,196,164};
// '3'
static const uint8_t bitmap_51[] = {96,136,132,164,164,184};
// '4'
static const uint8_t bitmap_52[] = {32,48,44,34,126,34};
// '5'
static const uint8_t bitmap_53[] = {32,78,74,74,74,74};
// '6'
static const uint8_t bitmap_54[] = {112,144,152,148,148,148};
// '7'
static const uint8_t bitmap_55[] = {66,98,50,10,6};
// '8'
static const uint8_t bitmap_56[] = {96,168,148,148,148,168};
// '9'
static const uint8_t bitmap_57[] = {24,164,164,164,100,36};
// ':'
static const uint8_t bitmap_58[] = {160};

static const uint8_t char_width[] = {6,2,5,6,6,6,6,5,6,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cherry_cream_soda_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
