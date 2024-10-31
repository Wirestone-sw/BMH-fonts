// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font homemade_apple_regular_8

#include "font.h"
#include "homemade_apple_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {64,32,224};
// '1'
static const uint8_t bitmap_49[] = {192,32};
// '2'
static const uint8_t bitmap_50[] = {32,224,32};
// '3'
static const uint8_t bitmap_51[] = {96,96,160};
// '4'
static const uint8_t bitmap_52[] = {128,0,192,32};
// '5'
static const uint8_t bitmap_53[] = {128,192,64,64};
// '6'
static const uint8_t bitmap_54[] = {128,96,160};
// '7'
static const uint8_t bitmap_55[] = {160,96,32};
// '8'
static const uint8_t bitmap_56[] = {192,160,64};
// '9'
static const uint8_t bitmap_57[] = {128,64,160,96};
// ':'
static const uint8_t bitmap_58[] = {};

static const uint8_t char_width[] = {3,2,3,3,4,4,3,3,3,4,-6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t homemade_apple_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
