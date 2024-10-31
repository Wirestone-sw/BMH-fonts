// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font yellowtail_regular_8

#include "font.h"
#include "yellowtail_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {224,144,112,56};
// '1'
static const uint8_t bitmap_49[] = {128,96,16};
// '2'
static const uint8_t bitmap_50[] = {128,192,176,16};
// '3'
static const uint8_t bitmap_51[] = {128,176,104,24};
// '4'
static const uint8_t bitmap_52[] = {240,48,40};
// '5'
static const uint8_t bitmap_53[] = {176,120,8};
// '6'
static const uint8_t bitmap_54[] = {192,160,112,16};
// '7'
static const uint8_t bitmap_55[] = {192,48,16};
// '8'
static const uint8_t bitmap_56[] = {192,208,104,24,8};
// '9'
static const uint8_t bitmap_57[] = {112,40,24};
// ':'
static const uint8_t bitmap_58[] = {128,32};

static const uint8_t char_width[] = {4,3,4,4,3,3,4,3,5,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t yellowtail_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
