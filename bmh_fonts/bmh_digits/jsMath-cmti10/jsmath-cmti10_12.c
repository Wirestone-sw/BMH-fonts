// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmti10_12

#include "font.h"
#include "jsmath-cmti10_12.h"

// '0'
static const uint8_t bitmap_48[] = {240,14,1,193,127,31};
// '1'
static const uint8_t bitmap_49[] = {0,0,136,252,14};
// '2'
static const uint8_t bitmap_50[] = {0,24,148,78,34,158};
// '3'
static const uint8_t bitmap_51[] = {128,8,44,34,210,14};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,176,142};
// '5'
static const uint8_t bitmap_53[] = {192,80,15,139,249,1};
// '6'
static const uint8_t bitmap_54[] = {240,60,20,242,102};
// '7'
static const uint8_t bitmap_55[] = {12,6,194,118,12,2};
// '8'
static const uint8_t bitmap_56[] = {128,64,60,98,242,14};
// '9'
static const uint8_t bitmap_57[] = {0,120,156,130,226,126};
// ':'
static const uint8_t bitmap_58[] = {0,32,48};

static const uint8_t char_width[] = {6,5,6,6,5,6,5,6,6,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmti10_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
