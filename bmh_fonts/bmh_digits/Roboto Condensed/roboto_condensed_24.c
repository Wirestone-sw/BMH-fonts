// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_24

#include "font.h"
#include "roboto_condensed_24.h"

// '0'
static const uint8_t bitmap_48[] = {192,252,254,7,3,3,3,15,254,248,31,255,255,0,0,0,0,128,255,255,0,1,3,7,6,6,6,7,3,0};
// '1'
static const uint8_t bitmap_49[] = {24,12,12,6,254,255,0,0,0,0,255,255,0,0,0,0,7,7};
// '2'
static const uint8_t bitmap_50[] = {56,60,30,7,3,3,3,135,254,252,0,0,0,128,224,112,60,30,7,3,0,0,6,7,7,7,6,6,6,6,6,6,6};
// '3'
static const uint8_t bitmap_51[] = {16,28,30,7,3,3,3,199,254,120,64,192,192,3,3,3,3,7,254,252,0,1,3,7,6,6,6,7,3,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,240,60,15,255,255,0,0,112,124,127,103,97,96,96,255,255,96,96,0,0,0,0,0,0,0,7,7,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,255,255,195,195,195,195,131,3,0,193,193,1,0,0,0,1,255,255,124,0,3,3,6,6,6,7,3,1,0};
// '6'
static const uint8_t bitmap_54[] = {224,248,156,206,199,195,195,128,0,0,255,255,131,0,0,0,1,255,255,56,0,1,3,7,6,6,7,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {3,3,3,3,3,3,131,243,127,31,3,0,0,0,128,240,254,31,3,0,0,0,0,0,4,7,7,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {124,254,135,3,3,3,135,254,124,252,255,7,3,3,3,7,255,248,1,3,7,6,6,6,7,3,1};
// '9'
static const uint8_t bitmap_57[] = {224,252,254,7,3,3,7,14,252,248,0,7,15,28,24,24,28,206,255,63,0,0,0,6,6,7,3,3,0,0};
// ':'
static const uint8_t bitmap_58[] = {224,224,64,0,0,0,7,7,2};

static const uint8_t char_width[] = {10,6,11,10,11,10,10,11,9,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
