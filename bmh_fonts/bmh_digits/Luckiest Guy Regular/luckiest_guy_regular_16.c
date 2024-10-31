// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font luckiest_guy_regular_16

#include "font.h"
#include "luckiest_guy_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {240,252,254,255,15,15,15,254,254,252,64,0,3,7,15,14,14,15,15,7,3,0};
// '1'
static const uint8_t bitmap_49[] = {15,255,255,255,255,0,7,7,7,7};
// '2'
static const uint8_t bitmap_50[] = {128,135,195,195,255,255,255,191,7,7,7,7,7,7,7,7};
// '3'
static const uint8_t bitmap_51[] = {1,15,103,103,119,255,255,254,136,7,15,14,14,14,15,15,7,1};
// '4'
static const uint8_t bitmap_52[] = {112,127,127,127,224,255,255,255,96,0,0,0,0,7,7,7,7,0};
// '5'
static const uint8_t bitmap_53[] = {128,191,63,63,187,251,243,243,224,3,7,7,7,7,7,7,3,1};
// '6'
static const uint8_t bitmap_54[] = {120,254,255,255,51,51,251,243,245,192,0,3,7,7,7,7,7,7,3,0};
// '7'
static const uint8_t bitmap_55[] = {7,7,131,227,251,255,127,15,0,6,7,7,7,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,255,255,255,51,51,255,255,239,1,3,7,7,7,7,7,3,3};
// '9'
static const uint8_t bitmap_57[] = {28,191,63,51,51,179,255,255,254,0,7,7,7,7,7,3,1,0};
// ':'
static const uint8_t bitmap_58[] = {48,120,120,48,4,14,14,6};

static const uint8_t char_width[] = {11,5,8,9,9,9,10,8,9,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t luckiest_guy_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
