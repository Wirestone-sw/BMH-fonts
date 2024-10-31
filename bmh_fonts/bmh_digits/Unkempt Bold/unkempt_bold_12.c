// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font unkempt_bold_12

#include "font.h"
#include "unkempt_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,112,24,8,8,8,24,112,192};
// '1'
static const uint8_t bitmap_49[] = {96,240};
// '2'
static const uint8_t bitmap_50[] = {48,8,8,136,120,0};
// '3'
static const uint8_t bitmap_51[] = {112,144,208,240,176,16};
// '4'
static const uint8_t bitmap_52[] = {192,240,152,128,248,192,0};
// '5'
static const uint8_t bitmap_53[] = {248,72,72,72,248,128};
// '6'
static const uint8_t bitmap_54[] = {192,176,88,72,40,72,192};
// '7'
static const uint8_t bitmap_55[] = {24,56,8,8,200,120,8};
// '8'
static const uint8_t bitmap_56[] = {0,240,136,136,136,216,48};
// '9'
static const uint8_t bitmap_57[] = {224,152,8,8,136,152,224};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {9,2,6,6,7,6,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t unkempt_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
