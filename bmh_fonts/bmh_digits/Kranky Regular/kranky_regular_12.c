// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font kranky_regular_12

#include "font.h"
#include "kranky_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,208,56,8,8,8,8,240};
// '1'
static const uint8_t bitmap_49[] = {208,248};
// '2'
static const uint8_t bitmap_50[] = {24,4,132,132,124,16};
// '3'
static const uint8_t bitmap_51[] = {24,200,104,120,136,8};
// '4'
static const uint8_t bitmap_52[] = {192,96,48,24,252,0};
// '5'
static const uint8_t bitmap_53[] = {248,136,136,136,48};
// '6'
static const uint8_t bitmap_54[] = {192,176,72,72,72,136,0};
// '7'
static const uint8_t bitmap_55[] = {24,8,200,248,40,24};
// '8'
static const uint8_t bitmap_56[] = {0,96,240,136,136,136,112,32};
// '9'
static const uint8_t bitmap_57[] = {32,248,8,8,8,136,240};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {8,2,6,6,6,5,7,6,8,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t kranky_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
