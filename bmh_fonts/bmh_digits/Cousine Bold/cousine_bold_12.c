// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_bold_12

#include "font.h"
#include "cousine_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {248,252,100,100,252,248};
// '1'
static const uint8_t bitmap_49[] = {8,8,252,252,0,0};
// '2'
static const uint8_t bitmap_50[] = {8,140,132,196,124,56};
// '3'
static const uint8_t bitmap_51[] = {8,12,68,68,252,184};
// '4'
static const uint8_t bitmap_52[] = {0,192,96,56,12,252,0,0};
// '5'
static const uint8_t bitmap_53[] = {124,124,36,100,228,196};
// '6'
static const uint8_t bitmap_54[] = {248,252,44,36,236,200};
// '7'
static const uint8_t bitmap_55[] = {4,4,196,228,60,12};
// '8'
static const uint8_t bitmap_56[] = {184,252,68,68,252,184};
// '9'
static const uint8_t bitmap_57[] = {120,252,132,140,252,248};
// ':'
static const uint8_t bitmap_58[] = {48,48};

static const uint8_t char_width[] = {6,6,6,6,8,6,6,6,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
