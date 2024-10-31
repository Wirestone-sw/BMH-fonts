// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font unkempt_regular_16

#include "font.h"
#include "unkempt_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,96,32,16,16,16,16,32,64,128,6,25,32,64,64,128,128,64,64,32,31};
// '1'
static const uint8_t bitmap_49[] = {64,160,96,0,127,64};
// '2'
static const uint8_t bitmap_50[] = {128,64,32,32,32,96,192,0,193,96,16,16,136,132,227,128};
// '3'
static const uint8_t bitmap_51[] = {224,64,32,64,32,160,96,32,64,196,134,3,131,130,70,56};
// '4'
static const uint8_t bitmap_52[] = {0,0,224,0,0,0,224,0,4,7,4,4,132,132,255,132};
// '5'
static const uint8_t bitmap_53[] = {192,32,64,32,32,32,224,0,71,132,134,2,2,130,196,120};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,64,32,32,32,0,0,0,30,121,132,2,2,2,2,130,204,56};
// '7'
static const uint8_t bitmap_55[] = {64,192,32,32,32,32,32,224,96,0,0,0,128,96,24,6,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,64,32,32,32,32,64,128,96,147,140,8,8,4,140,142,241};
// '9'
static const uint8_t bitmap_57[] = {128,192,96,32,32,32,32,64,128,7,8,8,16,16,136,72,52,15};
// ':'
static const uint8_t bitmap_58[] = {0,76};

static const uint8_t char_width[] = {11,3,8,8,8,8,10,9,9,9,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t unkempt_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
