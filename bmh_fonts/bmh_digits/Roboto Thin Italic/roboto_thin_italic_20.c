// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_thin_italic_20

#include "font.h"
#include "roboto_thin_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,64,96,32,32,32,64,128,240,14,1,0,0,0,0,0,192,63};
// '1'
static const uint8_t bitmap_49[] = {128,128,64,64,224,32,0,0,0,248,7,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,64,32,32,32,32,64,128,0,3,0,0,128,64,32,16,12,3};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,64,32,32,32,32,96,192,0,1,0,0,16,16,16,40,200,7};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,96,240,16,192,160,152,132,130,129,128,252,131,128};
// '5'
static const uint8_t bitmap_53[] = {0,0,192,32,32,32,32,32,32,32,0,31,8,8,8,8,8,48,192,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,64,32,32,32,0,208,44,18,17,8,8,8,8,48,192};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,32,32,32,32,32,224,32,0,0,0,128,96,24,4,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,64,32,32,32,32,32,192,192,71,40,48,16,16,16,48,200,7};
// '9'
static const uint8_t bitmap_57[] = {0,128,64,32,32,32,32,64,128,63,64,128,128,128,128,64,224,63};
// ':'
static const uint8_t bitmap_58[] = {0,4};

static const uint8_t char_width[] = {10,6,10,10,10,10,10,10,10,9,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_thin_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
