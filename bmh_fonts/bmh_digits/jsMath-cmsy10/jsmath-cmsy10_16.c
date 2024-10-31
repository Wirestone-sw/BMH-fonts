// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmsy10_16

#include "font.h"
#include "jsmath-cmsy10_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,240,31,7,0};
// '1'
static const uint8_t bitmap_49[] = {0,128,128,192,128,128,0,0,0,128,128,31,32,32,32,32,49,31,14,31,56,48};
// '2'
static const uint8_t bitmap_50[] = {0,128,64,32,32,32,32,32,32,7,26,34,66,66,66,66,66,66};
// '3'
static const uint8_t bitmap_51[] = {32,32,32,32,32,32,64,128,0,66,66,66,66,66,66,34,18,15};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,96,16,12,2,12,48,192,0,24,22,17,16,16,16,16,16,16,16,19};
// '5'
static const uint8_t bitmap_53[] = {96,160,32,32,32,32,32,32,32,32,32,0,1,6,24,32,192,0,192,48,12,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,96,24,4,128,96,24,6,1,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {192,15};
// '8'
static const uint8_t bitmap_56[] = {12,48,192,64,64,64,192,96,28,0,0,3,12,48,28,3,0,0};
// '9'
static const uint8_t bitmap_57[] = {4,4,4,4,4,4,4,252,33,33,33,33,33,33,33,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,31};

static const uint8_t char_width[] = {3,11,9,9,11,11,8,1,9,8,10};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmsy10_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
