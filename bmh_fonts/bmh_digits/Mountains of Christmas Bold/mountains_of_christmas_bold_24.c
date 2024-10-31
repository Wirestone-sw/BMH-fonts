// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_bold_24

#include "font.h"
#include "mountains_of_christmas_bold_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,128,128,128,0,0,30,63,127,64,64,96,32,63,12,0,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,192,128,4,4,2,2,255,255,255,0,0,0,0,27,31,15};
// '2'
static const uint8_t bitmap_50[] = {192,96,32,16,32,224,192,128,3,7,2,0,240,255,255,31,0,24,28,31,7,11,8,8};
// '3'
static const uint8_t bitmap_51[] = {0,32,64,96,96,224,224,64,0,152,28,30,31,243,225,128,15,17,17,16,30,15,15,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,0,0,0,0,192,240,126,31,3,255,0,0,0,6,7,7,2,2,2,127,127,3,1};
// '5'
static const uint8_t bitmap_53[] = {192,224,192,96,96,32,32,32,0,127,127,127,48,24,56,240,240,192,0,14,18,18,16,24,31,15,7};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,64,64,64,192,240,254,255,3,128,128,128,128,0,1,7,15,30,27,16,16,8,7};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,192,192,192,0,0,16,16,240,252,126,63,51,0,0,0,56,63,15,1,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,96,32,96,64,128,0,240,252,93,7,6,6,6,13,248,224,1,7,15,12,8,8,12,6,3,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,192,192,128,0,0,0,62,63,99,64,96,51,255,254,240,0,12,16,16,8,12,7,3,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,28,24,24,24};

static const uint8_t char_width[] = {9,7,8,8,10,9,9,10,10,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_bold_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
