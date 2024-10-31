// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font satisfy_regular_8

#include "font.h"
#include "satisfy_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {240,136,196,56};
// '1'
static const uint8_t bitmap_49[] = {192,60};
// '2'
static const uint8_t bitmap_50[] = {172,156};
// '3'
static const uint8_t bitmap_51[] = {172,244,8};
// '4'
static const uint8_t bitmap_52[] = {40,252};
// '5'
static const uint8_t bitmap_53[] = {156,116,4};
// '6'
static const uint8_t bitmap_54[] = {240,168,252};
// '7'
static const uint8_t bitmap_55[] = {128,100,28,4};
// '8'
static const uint8_t bitmap_56[] = {156,244,12};
// '9'
static const uint8_t bitmap_57[] = {176,172,124};
// ':'
static const uint8_t bitmap_58[] = {};

static const uint8_t char_width[] = {4,2,2,3,2,3,3,4,3,3,-6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t satisfy_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
