// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crafty_girls_regular_16

#include "font.h"
#include "crafty_girls_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,64,32,32,32,64,128,0,255,0,0,0,0,0,0,192,63};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,192,4,4,2,255};
// '2'
static const uint8_t bitmap_50[] = {128,64,32,32,32,96,192,3,132,128,128,192,176,15};
// '3'
static const uint8_t bitmap_51[] = {0,128,64,32,32,64,128,0,195,0,12,12,12,4,11,240};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,0,0,0,224,0,0,80,80,48,24,23,16,16,16,255,32,32};
// '5'
static const uint8_t bitmap_53[] = {0,224,32,32,32,32,32,0,224,23,2,1,1,129,66,60};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,32,32,32,32,192,30,113,136,132,132,132,68,56};
// '7'
static const uint8_t bitmap_55[] = {64,64,32,32,32,32,32,32,32,224,0,0,0,0,0,192,44,24,15,16};
// '8'
static const uint8_t bitmap_56[] = {128,64,32,32,32,32,64,128,0,241,10,4,4,4,4,10,17,224};
// '9'
static const uint8_t bitmap_57[] = {0,128,64,32,32,32,64,128,0,7,8,16,16,16,16,16,200,63};
// ':'
static const uint8_t bitmap_58[] = {0,4};

static const uint8_t char_width[] = {9,4,7,8,11,8,8,10,9,9,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crafty_girls_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
