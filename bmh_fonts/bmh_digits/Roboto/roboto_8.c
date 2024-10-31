// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_8

#include "font.h"
#include "roboto_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,132,132,248};
// '1'
static const uint8_t bitmap_49[] = {8,252};
// '2'
static const uint8_t bitmap_50[] = {136,196,164,152};
// '3'
static const uint8_t bitmap_51[] = {72,132,164,248};
// '4'
static const uint8_t bitmap_52[] = {96,80,72,252};
// '5'
static const uint8_t bitmap_53[] = {220,148,228};
// '6'
static const uint8_t bitmap_54[] = {248,148,224};
// '7'
static const uint8_t bitmap_55[] = {4,196,52,12};
// '8'
static const uint8_t bitmap_56[] = {72,180,164,248};
// '9'
static const uint8_t bitmap_57[] = {24,164,164,120};
// ':'
static const uint8_t bitmap_58[] = {72};

static const uint8_t char_width[] = {4,2,4,4,4,3,3,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
