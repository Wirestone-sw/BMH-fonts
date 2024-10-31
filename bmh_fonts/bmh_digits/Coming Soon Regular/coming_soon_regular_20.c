// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font coming_soon_regular_20

#include "font.h"
#include "coming_soon_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,64,64,64,64,128,0,0,0,252,7,0,0,0,0,0,1,3,252,224};
// '1'
static const uint8_t bitmap_49[] = {128,64,192,0,0,0,127,248};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,192,64,192,128,128,0,0,4,3,1,0,0,0,128,128,64,51,30};
// '3'
static const uint8_t bitmap_51[] = {64,64,64,64,64,64,64,64,192,192,0,0,0,0,0,0,0,8,30,19,17,32,192,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,192,0,0,255,128,128,128,128,128,128,255,252,128};
// '5'
static const uint8_t bitmap_53[] = {192,64,64,64,64,64,64,64,64,64,0,31,16,16,24,24,24,24,16,16,96,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,128,128,0,0,0,0,248,198,99,33,33,48,16,16,49,35,98,128};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,64,64,64,64,192,64,0,0,0,0,0,0,224,60,7,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,128,64,64,64,64,64,128,128,0,0,130,207,80,48,32,32,32,48,48,127,198,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,128,128,128,0,0,0,0,0,48,252,130,1,1,0,0,1,1,1,130,236,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,128};

static const uint8_t char_width[] = {11,4,11,12,10,11,12,10,12,13,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t coming_soon_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
