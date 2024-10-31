// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font redressed_regular_16

#include "font.h"
#include "redressed_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,112,16,8,8,8,24,112,224,128,15,62,112,96,64,64,64,32,31,7};
// '1'
static const uint8_t bitmap_49[] = {64,32,224,240,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {32,16,16,8,8,24,248,240,64,64,96,112,104,100,99,49};
// '3'
static const uint8_t bitmap_51[] = {32,16,8,8,136,120,48,0,0,130,129,129,193,99,126,28};
// '4'
static const uint8_t bitmap_52[] = {0,0,160,64,0,240,0,0,24,30,25,24,24,255,24,8};
// '5'
static const uint8_t bitmap_53[] = {192,48,48,48,48,48,16,3,2,2,130,198,126,56};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,64,32,16,16,16,0,62,255,130,129,129,131,135,126,60};
// '7'
static const uint8_t bitmap_55[] = {32,24,24,24,24,216,56,8,8,0,0,112,124,7,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,240,136,8,8,152,120,0,60,126,67,129,131,70,78,60};
// '9'
static const uint8_t bitmap_57[] = {0,192,32,16,16,16,16,96,224,128,1,7,142,136,136,72,40,60,15,3};
// ':'
static const uint8_t bitmap_58[] = {0,0,198,132};

static const uint8_t char_width[] = {10,4,8,8,8,7,9,9,8,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t redressed_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
