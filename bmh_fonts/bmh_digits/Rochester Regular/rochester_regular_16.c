// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rochester_regular_16

#include "font.h"
#include "rochester_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,32,32,32,32,192,0,63,243,0,0,0,128,255,14};
// '1'
static const uint8_t bitmap_49[] = {128,64,64,224,0,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {128,64,32,32,32,64,128,131,230,36,18,8,12,7};
// '3'
static const uint8_t bitmap_51[] = {0,192,64,32,32,192,192,224,1,10,8,12,19,240};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,224,0,0,16,12,18,17,32,254,32};
// '5'
static const uint8_t bitmap_53[] = {0,224,32,32,32,32,32,0,224,145,2,2,2,4,156,112};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,32,32,0,0,126,251,4,4,2,4,248};
// '7'
static const uint8_t bitmap_55[] = {96,32,32,32,160,96,32,0,0,252,3,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,64,32,32,64,192,0,224,17,10,6,12,26,49,224};
// '9'
static const uint8_t bitmap_57[] = {192,96,32,32,32,224,128,7,12,8,136,200,118,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,48,16};

static const uint8_t char_width[] = {8,4,7,7,7,8,7,7,8,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rochester_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
