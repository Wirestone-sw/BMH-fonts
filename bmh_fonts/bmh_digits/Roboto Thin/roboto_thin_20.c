// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_thin_20

#include "font.h"
#include "roboto_thin_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,64,32,32,32,32,64,128,0,255,0,0,0,0,0,0,0,1,254};
// '1'
static const uint8_t bitmap_49[] = {128,64,64,64,224,0,0,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {0,192,64,32,32,32,32,64,128,3,0,0,0,128,64,32,24,7};
// '3'
static const uint8_t bitmap_51[] = {0,192,64,32,32,32,32,64,192,0,1,0,0,16,16,16,16,40,103,128};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,64,224,0,0,0,128,96,16,12,2,1,0,255,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,224,32,32,32,32,32,32,32,47,16,8,8,8,8,8,16,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,64,64,32,32,32,0,0,252,35,16,8,8,8,8,24,48,192};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,32,32,32,32,32,224,32,0,0,0,0,128,96,24,6,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,64,32,32,32,32,64,192,0,199,40,40,16,16,16,16,40,100,131};
// '9'
static const uint8_t bitmap_57[] = {0,192,64,32,32,32,32,64,128,0,31,96,64,128,128,128,128,64,161,126};
// ':'
static const uint8_t bitmap_58[] = {0,0,4,4};

static const uint8_t char_width[] = {10,5,9,10,11,9,10,10,10,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_thin_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
