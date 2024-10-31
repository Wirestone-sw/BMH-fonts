// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font special_elite_regular_16

#include "font.h"
#include "special_elite_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {252,3,0,0,0,0,1,254,80,0,3,6,6,6,6,3,1,0};
// '1'
static const uint8_t bitmap_49[] = {0,1,1,0,255,255,0,0,0,0,4,6,4,4,7,7,4,6,6,4};
// '2'
static const uint8_t bitmap_50[] = {28,154,130,65,65,34,62,4,14,15,4,4,12,8,8,4};
// '3'
static const uint8_t bitmap_51[] = {6,35,17,57,61,39,195,128,7,11,8,8,8,12,7,1};
// '4'
static const uint8_t bitmap_52[] = {192,224,216,204,134,193,255,192,192,128,0,0,0,0,4,6,7,6,4,6};
// '5'
static const uint8_t bitmap_53[] = {126,61,18,18,18,33,192,128,7,7,8,8,8,4,3,0};
// '6'
static const uint8_t bitmap_54[] = {248,100,34,33,33,33,111,198,1,6,12,8,8,12,6,3};
// '7'
static const uint8_t bitmap_55[] = {6,3,1,0,129,225,25,7,3,0,0,0,0,15,1,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {230,63,16,16,16,16,57,231,3,3,6,6,4,6,3,1};
// '9'
static const uint8_t bitmap_57[] = {159,177,32,32,32,33,159,124,1,6,6,6,6,2,1,0};
// ':'
static const uint8_t bitmap_58[] = {48,120,56,48,15,15,11,7};

static const uint8_t char_width[] = {9,10,8,8,10,8,8,9,8,8,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t special_elite_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
