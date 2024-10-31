// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font satisfy_regular_16

#include "font.h"
#include "satisfy_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,48,16,24,240,192,255,129,128,192,112,31,1};
// '1'
static const uint8_t bitmap_49[] = {0,0,248,120,64,124,7,0};
// '2'
static const uint8_t bitmap_50[] = {0,64,224,16,8,136,240,224,176,208,200,198,131,1};
// '3'
static const uint8_t bitmap_51[] = {64,240,16,8,16,240,32,224,132,132,198,125,16,0};
// '4'
static const uint8_t bitmap_52[] = {128,192,96,48,200,56,3,2,98,126,7,6};
// '5'
static const uint8_t bitmap_53[] = {128,112,8,136,8,8,24,115,67,65,33,31,0,0};
// '6'
static const uint8_t bitmap_54[] = {128,224,48,136,168,56,127,66,65,96,56,15};
// '7'
static const uint8_t bitmap_55[] = {16,8,8,136,104,56,8,112,124,7,1,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,240,16,136,240,152,133,131,255,121,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,224,48,16,8,240,64,231,140,200,108,63,15};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,144,152,8};

static const uint8_t char_width[] = {7,4,7,7,6,7,6,7,6,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t satisfy_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
