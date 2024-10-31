// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font calligraffitti_regular_32

#include "font.h"
#include "calligraffitti_regular_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,192,224,48,24,8,12,4,4,4,8,48,192,128,248,126,7,1,0,0,0,0,0,0,0,0,0,128,127,127,255,128,0,0,0,0,0,0,0,0,0,192,120,31,0,0,3,15,30,56,48,48,48,56,24,14,7,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,64,64,96,224,240,120,0,0,0,0,0,0,192,252,63,7,0,0,0,0,0,224,126,15,1,0,0,0,32,48,48,62,51,16,0,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,128,192,96,48,16,24,8,8,8,8,8,48,224,0,0,0,0,0,0,0,0,1,0,0,0,0,0,128,192,96,48,24,14,3,0,0,0,0,0,128,192,96,48,24,12,12,6,3,1,0,0,0,0,0,0,0,0,28,14,7,7,6,6,14,12,28,24,56,48,48,96,96,96,96,96,48,48,24};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,128,192,96,32,48,16,24,24,24,24,56,240,224,0,0,0,0,0,0,1,1,0,0,0,16,16,24,24,28,46,103,195,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,255,63,3,6,8,24,48,32,96,96,96,96,96,48,48,24,28,14,7,3,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,192,224,56,4,0,0,0,0,128,192,0,0,0,0,192,224,112,28,7,1,0,0,0,192,240,124,15,3,128,192,64,4,7,3,3,3,3,3,3,2,230,126,15,7,6,2,3,1,0,0,0,0,0,0,0,0,0,96,30,3,0,0,0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,224,120,30,12,12,12,12,12,12,12,4,6,6,2,112,62,63,19,24,24,24,24,24,56,48,96,192,128,0,0,0,0,0,0,0,0,0,0,0,0,128,192,240,63,15,0,0,0,0,192,64,96,48,24,24,12,6,3,1,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,192,224,96,48,24,12,4,2,0,0,192,240,252,206,99,97,32,48,48,48,48,112,224,192,128,127,255,129,0,0,0,0,0,0,0,128,224,120,31,7,0,3,15,24,32,48,24,12,6,7,3,1,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {24,24,24,24,24,24,24,24,24,24,24,24,24,152,216,108,60,28,12,0,0,0,0,0,0,0,192,224,120,28,14,7,3,0,0,0,0,0,0,0,0,192,248,62,15,3,0,0,0,0,0,0,0,0,0,0,0,0,32,62,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,128,192,96,32,16,16,8,8,4,204,252,120,0,0,0,128,192,96,35,55,30,12,12,12,30,118,227,131,1,0,240,252,15,3,0,0,0,0,0,0,0,0,0,0,129,255,126,0,3,15,28,56,48,48,48,48,48,24,24,28,14,7,3,1,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,192,224,96,48,24,12,4,24,240,192,0,224,252,30,7,1,0,0,0,0,0,0,0,129,255,255,1,3,7,14,12,12,12,12,4,134,198,115,31,15,1,0,0,32,48,16,8,4,6,3,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,24,24,12,12};

static const uint8_t char_width[] = {16,11,21,20,19,17,15,19,18,15,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t calligraffitti_regular_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
