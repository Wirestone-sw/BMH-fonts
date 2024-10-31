// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font satisfy_regular_12

#include "font.h"
#include "satisfy_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,48,16,24,224};
// '1'
static const uint8_t bitmap_49[] = {0,136,120};
// '2'
static const uint8_t bitmap_50[] = {96,16,8,248,48};
// '3'
static const uint8_t bitmap_51[] = {112,80,136,200,48};
// '4'
static const uint8_t bitmap_52[] = {128,64,48,240,8};
// '5'
static const uint8_t bitmap_53[] = {224,88,72,200,8};
// '6'
static const uint8_t bitmap_54[] = {0,192,160,144,168,16};
// '7'
static const uint8_t bitmap_55[] = {8,136,72,56,8};
// '8'
static const uint8_t bitmap_56[] = {0,240,136,72,48};
// '9'
static const uint8_t bitmap_57[] = {0,224,16,8,144,224};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {6,3,5,5,5,5,6,5,5,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t satisfy_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
