// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_regular_24

#include "font.h"
#include "mountains_of_christmas_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,128,128,0,0,30,63,96,64,64,64,35,28,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,192,128,4,2,2,1,255,255,0,0,0,0,31,31};
// '2'
static const uint8_t bitmap_50[] = {192,96,32,16,16,96,192,0,0,7,8,7,2,192,124,15,0,0,0,16,28,22,17,16,8,8,8};
// '3'
static const uint8_t bitmap_51[] = {0,0,32,32,32,160,96,32,0,16,8,12,26,241,224,0,15,17,17,19,24,15,3,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,224,0,0,0,0,0,0,192,120,31,3,254,0,0,0,8,15,7,4,4,4,255,84,2,2};
// '5'
static const uint8_t bitmap_53[] = {192,192,192,192,64,64,0,255,96,32,32,224,192,0,29,38,36,32,24,15,1};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,64,64,64,64,128,240,252,7,1,128,128,128,0,0,0,1,7,14,31,17,16,16,15,0,0};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,64,192,64,0,0,0,16,208,240,60,23,32,0,0,0,48,62,7,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,32,32,64,128,0,224,248,13,3,2,2,6,9,240,3,7,12,8,8,8,4,2,1};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,64,192,128,0,0,6,31,17,16,16,11,143,252,12,0,16,16,8,12,7,1};
// ':'
static const uint8_t bitmap_58[] = {0,0,28,24,24,24};

static const uint8_t char_width[] = {8,6,9,8,10,7,10,10,9,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
