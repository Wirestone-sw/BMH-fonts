// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font maiden_orange_regular_24

#include "font.h"
#include "maiden_orange_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {255,255,128,0,0,0,0,0,192,255,127,0,3,7,14,12,12,12,14,7,3,0,0,0,0,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,255,255,0,0,24,24,31,31,24,28,0,0,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,192,224,112,56,56,28,15,135,129,15,15,15,14,14,14,14,14,15,15,0,0,0,0,0,0,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {192,192,0,12,12,12,30,63,243,225,1,7,7,14,12,12,12,14,7,3,0,0,0,0,0,0,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {224,248,254,231,225,224,255,255,224,224,32,0,0,0,0,0,24,31,31,24,28,0,0,0,0,0,0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {135,143,12,12,12,12,24,248,240,3,15,30,24,24,24,28,15,7,0,0,0,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {255,255,28,6,6,6,6,190,252,240,1,7,15,12,12,12,14,7,3,0,0,0,0,0,0,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,128,240,254,31,3,24,28,31,31,28,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {240,251,31,14,12,12,14,31,251,241,128,3,7,14,12,12,12,12,14,7,3,0,0,0,0,0,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {135,143,28,24,24,24,12,255,255,30,1,7,15,12,12,12,14,7,1,0,0,0,0,0,0,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {6,14,14,12,14,14,0,0,0};

static const uint8_t char_width[] = {11,6,10,10,11,9,10,7,11,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t maiden_orange_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
