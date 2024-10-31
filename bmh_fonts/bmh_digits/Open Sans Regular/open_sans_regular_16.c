// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_regular_16

#include "font.h"
#include "open_sans_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,128,128,0,0,254,3,0,0,0,0,3,254};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,2,1,1,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,128,128,128,128,0,0,1,1,128,192,96,49,31,4};
// '3'
static const uint8_t bitmap_51[] = {0,128,128,128,128,128,0,0,1,1,16,16,16,40,111,198};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,128,0,0,128,224,176,152,134,131,254,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,128,128,128,128,0,16,31,16,16,16,16,96,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,128,128,0,252,110,17,17,16,16,48,224};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,0,0,0,128,224,60,15,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,128,128,128,0,0,198,111,56,16,16,40,111,198};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,0,0,30,49,32,32,32,33,211,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,12};

static const uint8_t char_width[] = {8,4,8,8,10,8,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
