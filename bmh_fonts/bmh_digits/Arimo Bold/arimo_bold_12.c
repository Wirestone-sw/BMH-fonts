// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_12

#include "font.h"
#include "arimo_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {248,12,4,12,248};
// '1'
static const uint8_t bitmap_49[] = {24,12,252,252,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,24,12,132,236,120,0};
// '3'
static const uint8_t bitmap_51[] = {0,12,12,68,236,184,0};
// '4'
static const uint8_t bitmap_52[] = {128,192,112,28,252,252,0};
// '5'
static const uint8_t bitmap_53[] = {124,108,36,100,228,128};
// '6'
static const uint8_t bitmap_54[] = {192,248,156,68,204,200,0};
// '7'
static const uint8_t bitmap_55[] = {4,4,196,244,28};
// '8'
static const uint8_t bitmap_56[] = {0,184,236,68,236,184,0};
// '9'
static const uint8_t bitmap_57[] = {48,248,204,132,76,248,192};
// ':'
static const uint8_t bitmap_58[] = {96,96};

static const uint8_t char_width[] = {5,6,7,7,7,6,7,5,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
