// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmti10_20

#include "font.h"
#include "jsmath-cmti10_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,224,24,8,4,2,134,252,248,252,255,129,128,128,192,248,63,31,3};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,32,32,208,240,60,0,0,0,192,252,127,3,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,224,48,136,116,4,4,252,248,128,192,97,145,137,140,134,135,195,32};
// '3'
static const uint8_t bitmap_51[] = {0,0,96,184,248,4,4,132,252,120,240,48,0,0,130,194,126,61,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,248,60,4,128,128,192,176,152,14,243,249,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,248,142,78,204,132,6,2,48,248,153,128,192,64,120,63,15,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,48,152,140,132,52,60,255,255,7,1,128,224,127,31,0};
// '7'
static const uint8_t bitmap_55[] = {64,48,28,24,12,12,156,208,112,24,4,0,0,0,224,248,62,7,1,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,240,152,12,12,4,204,120,112,248,12,7,3,7,143,127,60,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,224,240,56,12,12,12,252,248,192,224,71,15,136,200,120,62,31,3};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,128,192,195,3,3};

static const uint8_t char_width[] = {10,8,10,10,10,10,9,11,10,10,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmti10_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
