// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmr10_8

#include "font.h"
#include "jsmath-cmr10_8.h"

// '0'
static const uint8_t bitmap_48[] = {62,34,34,30};
// '1'
static const uint8_t bitmap_49[] = {68,124,64};
// '2'
static const uint8_t bitmap_50[] = {68,98,84,40};
// '3'
static const uint8_t bitmap_51[] = {50,46,46,16};
// '4'
static const uint8_t bitmap_52[] = {104,124,96};
// '5'
static const uint8_t bitmap_53[] = {42,58};
// '6'
static const uint8_t bitmap_54[] = {60,38,42,24};
// '7'
static const uint8_t bitmap_55[] = {8,228,28,4};
// '8'
static const uint8_t bitmap_56[] = {100,156,156,96};
// '9'
static const uint8_t bitmap_57[] = {46,50,30};
// ':'
static const uint8_t bitmap_58[] = {40};

static const uint8_t char_width[] = {4,3,4,4,3,2,4,4,4,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmr10_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
