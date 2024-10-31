// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_regular_12

#include "font.h"
#include "arimo_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,248,4,4,4,248,192};
// '1'
static const uint8_t bitmap_49[] = {16,8,252,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {8,4,132,196,120};
// '3'
static const uint8_t bitmap_51[] = {8,4,68,68,184};
// '4'
static const uint8_t bitmap_52[] = {0,128,96,24,252,0,0};
// '5'
static const uint8_t bitmap_53[] = {252,68,68,68,132};
// '6'
static const uint8_t bitmap_54[] = {248,76,68,68,136};
// '7'
static const uint8_t bitmap_55[] = {4,4,196,116,28};
// '8'
static const uint8_t bitmap_56[] = {184,68,68,68,184};
// '9'
static const uint8_t bitmap_57[] = {248,4,4,4,248};
// ':'
static const uint8_t bitmap_58[] = {32,32};

static const uint8_t char_width[] = {7,6,5,5,7,5,5,5,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
