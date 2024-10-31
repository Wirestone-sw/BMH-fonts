// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_medium_italic_16

#include "font.h"
#include "roboto_medium_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,56,24,24,24,240,224,63,127,96,96,112,62,31,1};
// '1'
static const uint8_t bitmap_49[] = {192,96,96,224,240,0,128,252,127,1};
// '2'
static const uint8_t bitmap_50[] = {96,112,56,24,24,184,240,96,112,120,108,102,102,99,97,0};
// '3'
static const uint8_t bitmap_51[] = {0,32,48,56,24,24,184,240,96,16,48,96,99,99,115,63,28,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,240,240,16,48,56,62,55,49,240,255,55,48};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,240,48,48,48,48,48,16,114,231,194,195,195,127,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,96,48,48,48,127,255,194,195,195,127,62};
// '7'
static const uint8_t bitmap_55[] = {32,48,48,48,48,176,240,112,48,128,192,240,56,14,7,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,240,248,24,24,152,240,96,24,60,119,99,99,115,63,28,0};
// '9'
static const uint8_t bitmap_57[] = {224,240,56,24,24,56,240,192,3,103,102,54,54,31,15,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192,64,96,96,0};

static const uint8_t char_width[] = {8,5,8,9,9,9,7,9,9,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_medium_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
