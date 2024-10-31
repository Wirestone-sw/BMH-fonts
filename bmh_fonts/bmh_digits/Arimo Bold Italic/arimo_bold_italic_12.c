// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_italic_12

#include "font.h"
#include "arimo_bold_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {240,120,12,4,252,248};
// '1'
static const uint8_t bitmap_49[] = {0,16,24,236,252,12};
// '2'
static const uint8_t bitmap_50[] = {8,28,140,196,124,56};
// '3'
static const uint8_t bitmap_51[] = {0,8,28,76,196,252,56};
// '4'
static const uint8_t bitmap_52[] = {192,96,24,236,252,4};
// '5'
static const uint8_t bitmap_53[] = {0,112,124,36,100,228,4};
// '6'
static const uint8_t bitmap_54[] = {240,248,76,196,220,24};
// '7'
static const uint8_t bitmap_55[] = {4,4,196,228,60,12};
// '8'
static const uint8_t bitmap_56[] = {0,184,252,68,196,188,56};
// '9'
static const uint8_t bitmap_57[] = {0,120,252,140,196,252,248};
// ':'
static const uint8_t bitmap_58[] = {0,96,32};

static const uint8_t char_width[] = {6,6,6,7,6,7,6,6,7,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_bold_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
