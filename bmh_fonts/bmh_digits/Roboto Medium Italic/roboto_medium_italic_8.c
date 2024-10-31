// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_medium_italic_8

#include "font.h"
#include "roboto_medium_italic_8.h"

// '0'
static const uint8_t bitmap_48[] = {96,152,132,124};
// '1'
static const uint8_t bitmap_49[] = {8,252};
// '2'
static const uint8_t bitmap_50[] = {128,200,164,156};
// '3'
static const uint8_t bitmap_51[] = {192,136,164,124};
// '4'
static const uint8_t bitmap_52[] = {64,112,200,124};
// '5'
static const uint8_t bitmap_53[] = {64,156,148,100};
// '6'
static const uint8_t bitmap_54[] = {96,152,148,100};
// '7'
static const uint8_t bitmap_55[] = {196,36,28,4};
// '8'
static const uint8_t bitmap_56[] = {64,184,164,124};
// '9'
static const uint8_t bitmap_57[] = {184,164,120};
// ':'
static const uint8_t bitmap_58[] = {64,8};

static const uint8_t char_width[] = {4,2,4,4,4,4,4,4,4,3,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_medium_italic_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
