// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_regular_12

#include "font.h"
#include "cousine_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {248,12,68,68,12,248};
// '1'
static const uint8_t bitmap_49[] = {8,8,4,252,0,0};
// '2'
static const uint8_t bitmap_50[] = {8,4,132,196,108,56};
// '3'
static const uint8_t bitmap_51[] = {8,4,68,68,172,184};
// '4'
static const uint8_t bitmap_52[] = {128,96,16,12,252,0};
// '5'
static const uint8_t bitmap_53[] = {124,68,36,36,100,196};
// '6'
static const uint8_t bitmap_54[] = {240,72,36,36,36,200};
// '7'
static const uint8_t bitmap_55[] = {4,4,132,228,28,12};
// '8'
static const uint8_t bitmap_56[] = {184,100,68,68,108,184};
// '9'
static const uint8_t bitmap_57[] = {120,204,132,132,76,248};
// ':'
static const uint8_t bitmap_58[] = {48,48};

static const uint8_t char_width[] = {6,6,6,6,6,6,6,6,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
