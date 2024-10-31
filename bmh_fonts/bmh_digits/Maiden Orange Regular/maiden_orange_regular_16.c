// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font maiden_orange_regular_16

#include "font.h"
#include "maiden_orange_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {252,6,3,3,3,254,248,7,14,12,8,12,7,1};
// '1'
static const uint8_t bitmap_49[] = {3,3,255,0,12,12,15,12};
// '2'
static const uint8_t bitmap_50[] = {1,15,134,195,195,119,62,0,15,15,12,12,12,14};
// '3'
static const uint8_t bitmap_51[] = {15,6,99,99,243,158,7,12,8,8,12,7};
// '4'
static const uint8_t bitmap_52[] = {192,240,156,135,255,129,128,1,1,1,13,15,13,13};
// '5'
static const uint8_t bitmap_53[] = {63,35,35,35,199,128,7,12,8,12,15,3};
// '6'
static const uint8_t bitmap_54[] = {254,99,35,35,102,196,7,12,8,8,14,7};
// '7'
static const uint8_t bitmap_55[] = {7,7,3,195,251,31,0,12,14,15,12,0};
// '8'
static const uint8_t bitmap_56[] = {0,222,119,99,99,119,222,0,1,7,12,8,8,12,7,1};
// '9'
static const uint8_t bitmap_57[] = {24,126,67,193,67,254,252,0,6,12,8,12,7,3};
// ':'
static const uint8_t bitmap_58[] = {112,32,12,12};

static const uint8_t char_width[] = {7,4,7,6,7,6,6,6,8,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t maiden_orange_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
