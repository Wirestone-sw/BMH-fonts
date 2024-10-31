// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmmi10_16

#include "font.h"
#include "jsmath-cmmi10_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,32,32,32,192,128,15,31,16,16,16,31,15};
// '1'
static const uint8_t bitmap_49[] = {64,64,192,224,0,0,16,16,31,31,16,16};
// '2'
static const uint8_t bitmap_50[] = {96,112,16,16,176,224,64,8,12,14,14,13,12,2};
// '3'
static const uint8_t bitmap_51[] = {192,192,32,32,192,192,225,225,4,4,219,249};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,224,224,0,0,24,22,145,144,255,255,144,144};
// '5'
static const uint8_t bitmap_53[] = {160,64,192,64,64,32,0,227,228,2,2,132,252,48};
// '6'
static const uint8_t bitmap_54[] = {240,252,36,34,42,204,128,7,15,16,16,24,15,7};
// '7'
static const uint8_t bitmap_55[] = {224,192,192,192,192,192,192,3,0,224,248,6,1,0};
// '8'
static const uint8_t bitmap_56[] = {56,104,196,196,196,120,16,14,31,48,48,49,17,14};
// '9'
static const uint8_t bitmap_57[] = {0,192,64,32,96,192,0,7,207,80,16,136,127,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,12};

static const uint8_t char_width[] = {7,6,7,6,8,7,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmmi10_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
