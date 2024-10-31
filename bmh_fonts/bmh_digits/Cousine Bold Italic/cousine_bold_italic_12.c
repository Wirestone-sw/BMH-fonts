// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_bold_italic_12

#include "font.h"
#include "cousine_bold_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {240,248,76,68,204,252};
// '1'
static const uint8_t bitmap_49[] = {0,8,8,136,252,60,0};
// '2'
static const uint8_t bitmap_50[] = {0,16,152,140,196,108,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,8,76,196,236,188};
// '4'
static const uint8_t bitmap_52[] = {0,128,96,48,24,252,60};
// '5'
static const uint8_t bitmap_53[] = {96,124,108,100,228,196,4};
// '6'
static const uint8_t bitmap_54[] = {224,248,44,36,236,204};
// '7'
static const uint8_t bitmap_55[] = {4,196,228,52,28,12};
// '8'
static const uint8_t bitmap_56[] = {0,144,248,76,68,236,188};
// '9'
static const uint8_t bitmap_57[] = {112,248,140,132,236,252};
// ':'
static const uint8_t bitmap_58[] = {0,32,48};

static const uint8_t char_width[] = {6,7,7,7,7,7,6,6,7,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_bold_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
