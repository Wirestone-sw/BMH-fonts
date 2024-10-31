// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_black_italic_16

#include "font.h"
#include "roboto_black_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,224,240,56,24,24,248,240,63,127,119,96,96,62,63,15};
// '1'
static const uint8_t bitmap_49[] = {192,192,96,224,240,48,0,192,255,255,15,0};
// '2'
static const uint8_t bitmap_50[] = {0,64,112,112,56,24,184,248,240,96,112,120,124,126,111,103,99,33};
// '3'
static const uint8_t bitmap_51[] = {0,32,48,56,152,152,216,248,112,32,24,56,120,97,97,113,63,63,14,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,224,240,240,240,16,28,30,31,153,252,255,63,25};
// '5'
static const uint8_t bitmap_53[] = {0,224,240,112,48,48,48,48,16,98,227,231,195,195,255,127,28,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,224,112,48,48,16,63,127,255,195,195,255,127,62};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,48,240,240,240,48,128,224,248,124,31,7,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,240,248,24,152,248,240,96,60,126,119,99,99,127,63,28,0};
// '9'
static const uint8_t bitmap_57[] = {192,240,240,56,24,24,248,240,1,99,103,118,54,63,31,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,128,192,193,193,1};

static const uint8_t char_width[] = {8,6,9,10,9,9,8,9,9,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_black_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
