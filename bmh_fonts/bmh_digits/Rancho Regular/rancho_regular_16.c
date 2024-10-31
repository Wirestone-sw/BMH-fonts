// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rancho_regular_16

#include "font.h"
#include "rancho_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,96,112,48,48,224,128,14,127,192,128,128,192,127,31};
// '1'
static const uint8_t bitmap_49[] = {32,240,240,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {64,224,48,16,16,240,192,224,240,152,200,204,199,129};
// '3'
static const uint8_t bitmap_51[] = {16,48,48,48,176,240,112,32,240,198,135,135,198,124};
// '4'
static const uint8_t bitmap_52[] = {0,192,96,48,240,0,0,15,9,8,136,255,12,12};
// '5'
static const uint8_t bitmap_53[] = {240,48,48,48,48,16,0,231,194,131,131,199,126,24};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,48,16,16,112,0,14,127,198,131,131,195,126,24};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,16,144,240,112,0,0,240,254,7,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,48,16,16,240,224,48,253,199,130,130,207,125};
// '9'
static const uint8_t bitmap_57[] = {128,224,48,16,16,112,192,1,135,140,200,108,63,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,144,216};

static const uint8_t char_width[] = {8,3,7,7,7,7,8,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rancho_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
