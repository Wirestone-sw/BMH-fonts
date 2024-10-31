// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmmi10_8

#include "font.h"
#include "jsmath-cmmi10_8.h"

// '0'
static const uint8_t bitmap_48[] = {36,36,56};
// '1'
static const uint8_t bitmap_49[] = {36,60,32};
// '2'
static const uint8_t bitmap_50[] = {20,26,26,12};
// '3'
static const uint8_t bitmap_51[] = {164,120};
// '4'
static const uint8_t bitmap_52[] = {168,252,160};
// '5'
static const uint8_t bitmap_53[] = {76,152,148,96};
// '6'
static const uint8_t bitmap_54[] = {30,38,38,24};
// '7'
static const uint8_t bitmap_55[] = {8,100,28,4};
// '8'
static const uint8_t bitmap_56[] = {54,74,54};
// '9'
static const uint8_t bitmap_57[] = {120,196,164,120};
// ':'
static const uint8_t bitmap_58[] = {16};

static const uint8_t char_width[] = {3,3,4,2,3,4,4,4,3,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmmi10_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
