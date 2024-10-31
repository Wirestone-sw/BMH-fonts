// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_light_16

#include "font.h"
#include "roboto_light_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,32,16,16,16,32,192,63,64,128,128,128,64,63};
// '1'
static const uint8_t bitmap_49[] = {64,64,32,32,240,0,0,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {224,32,16,16,16,48,192,0,192,224,176,136,132,130,129,128};
// '3'
static const uint8_t bitmap_51[] = {96,48,16,16,16,48,224,96,192,130,130,130,197,124};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,32,240,0,0,24,22,17,16,16,255,16,16};
// '5'
static const uint8_t bitmap_53[] = {0,240,16,16,16,16,16,32,67,129,129,129,195,126};
// '6'
static const uint8_t bitmap_54[] = {128,64,32,16,16,16,0,63,66,129,129,129,195,126};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,16,144,112,16,0,128,192,56,6,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {224,48,16,16,16,48,224,125,197,130,130,130,197,124};
// '9'
static const uint8_t bitmap_57[] = {224,48,16,16,16,32,192,7,140,136,136,72,100,31};
// ':'
static const uint8_t bitmap_58[] = {128,128};

static const uint8_t char_width[] = {7,5,8,7,8,7,7,8,7,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_light_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
