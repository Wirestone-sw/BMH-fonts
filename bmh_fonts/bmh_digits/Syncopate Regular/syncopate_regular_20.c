// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font syncopate_regular_20

#include "font.h"
#include "syncopate_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {128,96,16,8,8,4,4,4,4,4,4,8,8,16,15,48,64,128,128,0,0,0,0,0,0,128,128,64};
// '1'
static const uint8_t bitmap_49[] = {8,8,4,4,252,0,0,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {16,8,8,4,4,4,4,4,4,8,8,16,224,0,128,128,64,64,32,16,16,8,4,2,1,0};
// '3'
static const uint8_t bitmap_51[] = {16,8,8,4,4,4,4,4,4,4,136,136,112,0,128,128,0,0,1,1,1,1,1,3,130,130,68,56};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,64,32,16,8,4,252,0,0,16,24,20,18,17,16,16,16,16,16,16,255,16,16};
// '5'
static const uint8_t bitmap_53[] = {0,252,4,4,4,4,4,4,4,4,4,4,4,0,64,131,129,1,1,1,1,1,1,1,130,130,68,56};
// '6'
static const uint8_t bitmap_54[] = {192,32,16,8,136,132,132,132,132,132,132,4,8,31,34,65,129,0,0,0,0,0,0,128,129,66};
// '7'
static const uint8_t bitmap_55[] = {4,4,4,4,4,4,4,4,4,4,132,100,28,4,0,0,0,0,0,128,96,24,12,3,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,48,72,136,132,4,4,4,4,4,132,136,72,48,56,68,130,130,2,1,1,1,1,1,2,130,130,68};
// '9'
static const uint8_t bitmap_57[] = {224,16,8,8,4,4,4,4,4,4,8,16,32,192,1,130,4,8,8,8,8,8,8,136,132,68,50,15};
// ':'
static const uint8_t bitmap_58[] = {128,129};

static const uint8_t char_width[] = {14,5,13,14,14,14,13,14,14,14,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t syncopate_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
