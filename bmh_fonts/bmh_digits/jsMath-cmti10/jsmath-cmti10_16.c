// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmti10_16

#include "font.h"
#include "jsmath-cmti10_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,56,4,2,2,242,254,60,15,16,24,8,15,7,1,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,16,208,248,12,16,16,28,31,16,0};
// '2'
static const uint8_t bitmap_50[] = {0,96,88,116,4,132,252,120,24,12,10,27,17,24,12,4};
// '3'
static const uint8_t bitmap_51[] = {0,0,48,40,148,132,68,56,8,28,16,16,16,15,7,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,120,28,16,8,20,211,253,30,16};
// '5'
static const uint8_t bitmap_53[] = {0,96,94,38,38,198,2,2,14,18,16,8,14,7,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,224,240,72,68,196,156,8,31,55,48,16,28,15,3,0};
// '7'
static const uint8_t bitmap_55[] = {32,24,12,12,12,200,48,8,4,0,0,16,60,15,1,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,248,228,196,68,60,30,49,48,16,25,15,0};
// '9'
static const uint8_t bitmap_57[] = {0,240,120,4,4,196,252,24,41,35,18,13,7,1};
// ':'
static const uint8_t bitmap_58[] = {0,96,96,12,12,0};

static const uint8_t char_width[] = {8,6,8,8,7,8,8,9,7,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmti10_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
