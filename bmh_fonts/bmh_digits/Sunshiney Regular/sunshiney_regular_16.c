// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font sunshiney_regular_16

#include "font.h"
#include "sunshiney_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,32,32,32,32,96,192,0,63,65,192,128,192,64,64,49,15};
// '1'
static const uint8_t bitmap_49[] = {128,192,224,0,96,255};
// '2'
static const uint8_t bitmap_50[] = {128,64,64,32,192,192,224,176,140,7};
// '3'
static const uint8_t bitmap_51[] = {64,32,32,224,64,0,0,240,146,150,195,66,62,8};
// '4'
static const uint8_t bitmap_52[] = {0,192,0,0,224,0,30,27,8,252,159,8};
// '5'
static const uint8_t bitmap_53[] = {192,192,32,32,96,0,0,0,143,234,44,100,4,132,252,48};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,64,96,32,0,0,252,135,57,76,36,4,196,120};
// '7'
static const uint8_t bitmap_55[] = {32,224,32,32,32,32,224,96,0,0,0,248,14,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,32,32,32,224,192,120,199,131,131,65,99,62};
// '9'
static const uint8_t bitmap_57[] = {0,192,96,32,160,160,32,192,3,15,8,141,70,99,56,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,136,216};

static const uint8_t char_width[] = {9,3,5,7,6,8,8,8,7,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t sunshiney_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
