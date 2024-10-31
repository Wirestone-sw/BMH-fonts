// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rancho_regular_12

#include "font.h"
#include "rancho_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,224,56,16,48,224};
// '1'
static const uint8_t bitmap_49[] = {8,248};
// '2'
static const uint8_t bitmap_50[] = {32,48,8,24,240};
// '3'
static const uint8_t bitmap_51[] = {16,152,152,88,48,0};
// '4'
static const uint8_t bitmap_52[] = {192,48,16,248,0};
// '5'
static const uint8_t bitmap_53[] = {128,240,144,144,144,8};
// '6'
static const uint8_t bitmap_54[] = {128,224,144,152,144,32};
// '7'
static const uint8_t bitmap_55[] = {16,16,24,208,48,16};
// '8'
static const uint8_t bitmap_56[] = {0,240,136,136,240,0};
// '9'
static const uint8_t bitmap_57[] = {224,240,24,16,240,192};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {6,2,5,6,5,6,6,6,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rancho_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
