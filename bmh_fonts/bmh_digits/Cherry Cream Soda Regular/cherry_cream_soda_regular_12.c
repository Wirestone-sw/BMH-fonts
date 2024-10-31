// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cherry_cream_soda_regular_12

#include "font.h"
#include "cherry_cream_soda_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,96,32,16,16,16,16,16};
// '1'
static const uint8_t bitmap_49[] = {16,16,240,240,16};
// '2'
static const uint8_t bitmap_50[] = {96,112,24,8,8,8,8,152};
// '3'
static const uint8_t bitmap_51[] = {0,16,16,8,8,8,8,152,240};
// '4'
static const uint8_t bitmap_52[] = {0,128,192,96,48,24,248,248,8};
// '5'
static const uint8_t bitmap_53[] = {120,120,104,40,40,40,40,72};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,224,112,80,88,72,136};
// '7'
static const uint8_t bitmap_55[] = {8,8,8,8,136,200,104,56};
// '8'
static const uint8_t bitmap_56[] = {0,96,224,144,144,144,144,144,224};
// '9'
static const uint8_t bitmap_57[] = {224,240,16,24,8,8,8,8,16};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {9,5,8,9,9,8,9,8,9,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cherry_cream_soda_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
