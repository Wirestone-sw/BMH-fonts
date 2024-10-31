// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_regular_16

#include "font.h"
#include "cousine_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,48,16,16,48,224,192,31,63,96,67,67,96,63,31};
// '1'
static const uint8_t bitmap_49[] = {64,64,96,32,240,0,0,0,64,64,64,64,127,64,64,64};
// '2'
static const uint8_t bitmap_50[] = {64,96,48,16,16,48,224,192,96,112,88,76,68,66,65,64};
// '3'
static const uint8_t bitmap_51[] = {64,96,48,16,16,48,224,192,16,48,96,66,66,103,61,56};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,32,240,240,0,12,10,9,8,8,127,127,8};
// '5'
static const uint8_t bitmap_53[] = {0,240,16,16,16,16,16,0,19,51,99,65,65,99,62,28};
// '6'
static const uint8_t bitmap_54[] = {128,224,48,16,16,16,48,0,15,63,98,65,65,99,62,28};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,16,208,112,16,0,0,96,124,7,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,48,16,16,48,224,192,24,61,66,66,66,66,61,24};
// '9'
static const uint8_t bitmap_57[] = {192,224,48,16,16,48,224,128,1,99,70,68,68,98,63,15};
// ':'
static const uint8_t bitmap_58[] = {192,192,96,96};

static const uint8_t char_width[] = {8,8,8,8,8,8,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
