// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_italic_20

#include "font.h"
#include "cousine_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,192,96,96,96,96,224,192,224,254,15,1,16,28,28,0,192,255,63};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,128,192,64,224,224,0,0,0,1,0,0,224,255,31,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,192,192,96,96,96,96,224,192,0,0,129,193,64,96,48,24,28,15,7};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,192,64,96,96,96,96,224,192,128,128,1,1,24,24,24,24,252,231,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,192,224,224,32,224,240,216,204,198,195,193,248,255,199,192};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,224,96,96,96,96,96,96,96,32,128,140,15,5,6,6,6,6,206,252,56,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,96,96,96,96,224,192,252,255,27,8,12,12,12,156,248,112};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,224,96,0,128,192,112,56,14,7,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,64,96,32,32,96,224,192,192,224,55,31,24,8,8,24,252,247,3};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,192,64,96,96,96,96,224,192,0,14,31,49,48,48,48,16,200,255,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,128,128,0,0,3,3,1};

static const uint8_t char_width[] = {11,10,11,11,11,12,10,10,11,11,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
