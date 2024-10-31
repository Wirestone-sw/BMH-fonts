// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font kranky_regular_16

#include "font.h"
#include "kranky_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,64,224,48,16,16,16,16,16,96,128,31,32,127,128,0,0,0,128,128,96,31};
// '1'
static const uint8_t bitmap_49[] = {32,224,224,192,63,255};
// '2'
static const uint8_t bitmap_50[] = {32,16,8,8,8,248,144,96,224,152,132,132,130,131,225,0};
// '3'
static const uint8_t bitmap_51[] = {48,16,16,144,240,80,48,16,32,192,130,131,129,130,66,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,224,80,40,208,0,10,13,11,8,8,136,255,136};
// '5'
static const uint8_t bitmap_53[] = {240,240,16,16,16,16,112,103,131,129,129,130,66,60};
// '6'
static const uint8_t bitmap_54[] = {0,192,32,16,16,16,16,0,0,14,53,66,129,129,129,130,126,56};
// '7'
static const uint8_t bitmap_55[] = {48,16,16,16,144,112,208,48,16,0,192,188,243,142,1,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,224,32,16,16,32,224,224,0,96,144,251,7,4,4,4,2,255,136,112};
// '9'
static const uint8_t bitmap_57[] = {224,112,16,16,16,16,32,192,7,134,136,136,72,36,20,15};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,144,216,144};

static const uint8_t char_width[] = {11,3,8,8,8,7,9,9,11,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t kranky_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
