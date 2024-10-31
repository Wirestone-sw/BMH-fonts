// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rancho_regular_24

#include "font.h"
#include "rancho_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {224,248,126,14,15,7,7,7,126,252,224,255,255,192,0,0,0,0,128,252,255,31,0,1,3,7,6,6,6,3,3,0,0};
// '1'
static const uint8_t bitmap_49[] = {28,254,254,0,255,255,8,15,15};
// '2'
static const uint8_t bitmap_50[] = {16,60,62,7,3,3,3,7,254,252,128,224,240,48,24,28,14,7,3,1,1,7,7,6,7,7,3,3,3,7};
// '3'
static const uint8_t bitmap_51[] = {7,7,7,135,195,227,119,63,31,15,224,192,3,7,3,3,7,143,254,252,1,3,7,7,6,6,7,3,3,0};
// '4'
static const uint8_t bitmap_52[] = {128,192,240,124,30,7,255,255,7,0,0,31,31,25,28,28,12,255,255,253,12,12,0,0,0,0,0,0,7,7,7,0,0};
// '5'
static const uint8_t bitmap_53[] = {255,255,255,135,135,135,135,135,3,1,0,131,195,135,3,1,1,1,131,255,254,48,1,3,7,7,6,6,7,3,3,0,0};
// '6'
static const uint8_t bitmap_54[] = {224,248,60,142,135,131,131,131,7,14,0,127,255,255,3,1,1,1,3,255,254,56,0,1,3,7,6,6,6,7,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {6,15,7,7,3,3,227,243,127,31,7,0,0,0,224,252,255,15,1,0,0,0,0,0,0,7,7,3,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {120,254,255,131,3,3,131,254,254,48,252,254,143,3,3,3,3,143,254,252,1,3,7,6,6,6,6,7,3,0};
// '9'
static const uint8_t bitmap_57[] = {248,254,14,3,3,3,7,254,252,240,3,7,15,12,12,140,238,255,63,15,0,2,6,7,3,3,1,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,16,24,156,8,3,3,3,0};

static const uint8_t char_width[] = {11,3,10,10,11,11,11,11,10,10,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rancho_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
