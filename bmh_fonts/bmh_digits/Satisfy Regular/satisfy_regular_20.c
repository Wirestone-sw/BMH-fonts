// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font satisfy_regular_20

#include "font.h"
#include "satisfy_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,192,224,48,16,16,240,192,252,255,3,0,0,0,224,255,31};
// '1'
static const uint8_t bitmap_49[] = {0,0,64,224,240,32,0,128,248,63,3,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,192,224,48,16,16,176,240,64,0,0,129,193,96,48,28,15,3,0};
// '3'
static const uint8_t bitmap_51[] = {0,192,224,48,16,16,16,240,224,0,1,49,16,24,60,231,3,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,96,240,240,56,62,55,49,240,252,63,48};
// '5'
static const uint8_t bitmap_53[] = {0,0,192,96,96,96,96,96,224,48,126,51,24,24,24,240,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,32,16,144,240,64,248,254,63,28,4,4,252,248,0};
// '7'
static const uint8_t bitmap_55[] = {0,112,48,48,48,48,176,240,112,0,128,224,120,28,7,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,16,16,16,240,96,224,112,23,31,124,246,195,1,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,224,96,16,16,16,224,0,0,28,127,97,64,96,176,238,63,3};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128,192,192};

static const uint8_t char_width[] = {9,6,10,9,8,9,9,9,9,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t satisfy_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
