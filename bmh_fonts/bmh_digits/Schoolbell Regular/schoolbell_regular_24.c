// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font schoolbell_regular_24

#include "font.h"
#include "schoolbell_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {224,240,56,28,12,12,28,56,240,224,63,255,192,0,0,0,0,192,255,63,0,1,3,7,6,6,7,3,1,0};
// '1'
static const uint8_t bitmap_49[] = {0,254,252,240,255,31,15,15,0};
// '2'
static const uint8_t bitmap_50[] = {12,12,12,6,6,6,6,14,156,248,240,0,128,128,192,224,112,56,28,14,7,1,0,0,3,3,3,3,3,3,6,6,2,3,3,2};
// '3'
static const uint8_t bitmap_51[] = {8,12,12,12,14,6,14,140,252,248,32,0,0,0,0,6,6,15,15,13,25,56,240,192,6,12,12,12,12,12,12,12,6,7,3,0};
// '4'
static const uint8_t bitmap_52[] = {240,252,12,0,0,0,0,0,254,252,0,0,15,15,12,12,12,12,12,12,255,255,24,24,0,0,0,0,0,0,0,0,15,15,0,0};
// '5'
static const uint8_t bitmap_53[] = {248,252,12,6,6,6,6,6,6,6,0,0,0,1,1,3,3,3,3,7,6,142,140,216,248,96,0,0,3,3,6,7,3,3,3,1,1,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,240,124,14,7,1,0,0,0,0,248,255,31,12,12,14,12,12,140,252,248,3,7,14,14,6,6,3,3,1,1,0};
// '7'
static const uint8_t bitmap_55[] = {12,12,12,12,12,12,12,204,252,124,0,0,0,0,0,224,252,31,3,0,0,0,0,12,15,7,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {24,60,124,230,198,198,230,126,31,15,2,192,248,60,15,7,1,3,15,60,248,192,0,3,7,14,12,12,12,14,7,3,1};
// '9'
static const uint8_t bitmap_57[] = {192,240,56,12,6,7,3,195,255,60,7,7,14,12,12,12,12,255,255,0,0,0,0,0,0,0,0,7,15,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,12,12,4,4,14,6,0};

static const uint8_t char_width[] = {10,3,12,12,12,13,11,10,11,10,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t schoolbell_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
