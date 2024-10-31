// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font unkempt_regular_12

#include "font.h"
#include "unkempt_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,48,8,8,8,8,8,48,192};
// '1'
static const uint8_t bitmap_49[] = {32,240};
// '2'
static const uint8_t bitmap_50[] = {48,8,8,136,112,0};
// '3'
static const uint8_t bitmap_51[] = {48,144,208,208,176,16};
// '4'
static const uint8_t bitmap_52[] = {192,176,136,128,248,128};
// '5'
static const uint8_t bitmap_53[] = {248,72,72,72,88,128};
// '6'
static const uint8_t bitmap_54[] = {224,144,72,72,40,72,128};
// '7'
static const uint8_t bitmap_55[] = {24,8,8,8,200,56,8};
// '8'
static const uint8_t bitmap_56[] = {0,112,136,136,136,200,48};
// '9'
static const uint8_t bitmap_57[] = {240,136,8,8,136,152,224};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {9,2,6,6,6,6,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t unkempt_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
