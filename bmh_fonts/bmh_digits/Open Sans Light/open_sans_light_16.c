// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_light_16

#include "font.h"
#include "open_sans_light_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,128,128,128,0,0,254,1,0,0,0,0,1,254};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,2,1,0,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,128,128,128,0,1,1,0,128,64,33,31};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,128,128,128,0,0,1,1,16,16,16,24,47,192};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,128,128,0,0,128,192,176,136,132,131,128,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {128,128,128,128,128,128,0,31,16,16,16,16,32,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,128,128,128,0,248,22,9,8,8,8,16,224};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,0,0,0,128,96,24,6,1};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,128,128,128,0,0,198,41,40,16,16,40,45,194};
// '9'
static const uint8_t bitmap_57[] = {0,0,128,128,128,128,0,0,30,33,64,64,64,64,163,124};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,12};

static const uint8_t char_width[] = {8,4,7,8,10,7,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_light_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
