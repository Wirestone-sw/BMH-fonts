// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font unkempt_regular_20

#include "font.h"
#include "unkempt_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,64,64,96,64,64,192,128,0,0,0,252,3,1,0,0,0,0,0,0,0,1,3,254,16};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,128,0,3,1,255,11,0};
// '2'
static const uint8_t bitmap_50[] = {0,192,96,32,32,32,32,96,192,0,1,1,128,64,96,32,16,12,135,128};
// '3'
static const uint8_t bitmap_51[] = {224,32,32,32,32,32,160,160,224,96,0,1,128,8,12,6,7,7,4,12,248,32};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,224,0,0,0,32,224,0,0,8,30,27,8,24,24,8,8,255,8,8};
// '5'
static const uint8_t bitmap_53[] = {224,224,32,32,32,32,32,32,224,128,0,15,31,8,12,4,4,4,12,9,248,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,64,64,64,32,64,0,0,0,248,206,49,24,8,12,4,4,4,8,24,240};
// '7'
static const uint8_t bitmap_55[] = {32,224,32,32,32,32,32,32,32,160,224,0,1,0,0,0,128,224,56,14,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,64,32,32,32,32,32,96,192,0,0,231,44,24,16,16,16,24,24,28,55,192};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,64,64,96,64,64,64,128,0,0,30,51,96,64,64,64,64,64,32,176,255,12};
// ':'
static const uint8_t bitmap_58[] = {0,0,96,64};

static const uint8_t char_width[] = {14,5,10,11,11,11,12,11,12,12,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t unkempt_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
