// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font redressed_regular_20

#include "font.h"
#include "redressed_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,64,64,32,96,96,192,192,128,0,0,252,255,129,0,0,0,0,0,0,1,15,255,248};
// '1'
static const uint8_t bitmap_49[] = {128,64,64,224,224,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,64,96,224,192,192,128,0,1,0,0,0,0,128,192,127,63,15};
// '3'
static const uint8_t bitmap_51[] = {128,128,64,64,96,224,192,192,0,0,1,32,16,16,24,55,103,225,192,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,0,224,224,224,0,192,240,216,199,195,192,255,255,255,192};
// '5'
static const uint8_t bitmap_53[] = {0,224,96,96,96,96,96,96,96,30,9,8,8,8,24,56,240,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,192,64,32,32,32,0,0,248,252,31,11,5,4,4,12,28,248,248,224};
// '7'
static const uint8_t bitmap_55[] = {0,128,192,192,192,192,192,192,192,192,32,2,1,0,0,192,240,24,6,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,64,32,32,32,192,192,128,0,128,199,239,60,56,48,120,108,231,195,128};
// '9'
static const uint8_t bitmap_57[] = {128,192,96,32,32,32,32,32,224,192,128,0,31,63,112,96,64,64,64,32,224,255,127,12};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,32,112,32};

static const uint8_t char_width[] = {13,5,10,10,10,9,12,11,11,12,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t redressed_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
