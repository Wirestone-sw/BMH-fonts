// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_italic_12

#include "font.h"
#include "cousine_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,24,196,196,4,252};
// '1'
static const uint8_t bitmap_49[] = {0,0,8,8,252,12,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,8,132,132,68,60};
// '3'
static const uint8_t bitmap_51[] = {0,8,68,68,164,188};
// '4'
static const uint8_t bitmap_52[] = {0,128,64,32,24,244,12};
// '5'
static const uint8_t bitmap_53[] = {64,124,36,36,100,196};
// '6'
static const uint8_t bitmap_54[] = {224,88,44,36,36,204};
// '7'
static const uint8_t bitmap_55[] = {4,132,100,52,12,4};
// '8'
static const uint8_t bitmap_56[] = {128,120,68,68,196,188};
// '9'
static const uint8_t bitmap_57[] = {112,216,132,132,68,252};
// ':'
static const uint8_t bitmap_58[] = {0,48};

static const uint8_t char_width[] = {6,7,7,6,7,6,6,6,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
