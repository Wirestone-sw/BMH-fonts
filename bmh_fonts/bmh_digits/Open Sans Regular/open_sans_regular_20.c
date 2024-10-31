// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_regular_20

#include "font.h"
#include "open_sans_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,240,252,14,7,3,3,3,7,14,252,240};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,8,28,12,6,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,6,6,3,3,3,3,135,254,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,4,6,6,131,131,131,131,199,126,60,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,48,24,14,255,255,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,255,255,195,195,195,195,195,131,3,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,192,248,28,142,198,195,195,195,195,131,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,3,3,3,3,3,3,131,227,123,15,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,60,110,195,131,131,131,195,110,60,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,120,252,134,3,3,3,3,135,142,252,240};
// ':'
static const uint8_t bitmap_58[] = {0,0,112,112};

static const uint8_t char_width[] = {11,6,9,11,13,10,11,11,11,11,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
