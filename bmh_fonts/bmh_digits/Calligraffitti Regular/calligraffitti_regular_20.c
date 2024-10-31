// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font calligraffitti_regular_20

#include "font.h"
#include "calligraffitti_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,64,96,32,32,96,128,240,28,3,0,0,0,0,0,128,127};
// '1'
static const uint8_t bitmap_49[] = {0,128,128,192,224,0,128,120,7,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,64,64,32,32,32,96,192,0,0,1,0,128,192,96,48,24,12,3};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,128,64,64,32,32,32,32,192,0,0,0,0,0,0,0,16,16,24,28,50,225};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,96,0,0,0,0,0,192,96,88,76,71,65,128,224,184,78,67,32};
// '5'
static const uint8_t bitmap_53[] = {0,0,128,224,32,32,32,32,32,32,16,16,30,11,8,8,8,8,16,224,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,64,32,16,0,240,44,18,9,8,8,8,24,240};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,64,64,64,64,64,64,192,192,96,0,0,0,0,192,96,56,12,6,3,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,64,64,32,32,224,0,192,48,27,12,4,4,14,51,193};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,192,96,32,192,0,120,70,131,129,128,128,64,193,127};
// ':'
static const uint8_t bitmap_58[] = {0,128};

static const uint8_t char_width[] = {10,5,11,13,12,11,9,13,10,9,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t calligraffitti_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
