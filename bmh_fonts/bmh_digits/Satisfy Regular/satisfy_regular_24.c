// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font satisfy_regular_24

#include "font.h"
#include "satisfy_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {128,224,248,30,7,3,1,1,131,255,248,255,255,1,0,0,0,192,248,63,15,0,0,3,3,6,2,3,1,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,228,254,63,2,0,192,252,63,3,0,0,4,7,7,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,28,30,23,1,0,128,240,127,31,192,224,112,56,24,12,7,3,1,0,0,7,3,3,3,3,3,3,3,7,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,28,31,23,1,129,192,224,127,63,4,192,64,0,2,3,3,195,254,60,0,0,3,7,6,6,2,3,1,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {128,192,224,48,24,14,135,251,63,3,7,7,6,6,130,250,255,15,6,0,0,0,0,0,3,7,3,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,192,248,30,2,131,131,3,7,15,7,198,7,7,3,1,1,195,127,30,0,0,7,15,14,6,6,3,1,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,224,248,188,206,195,65,200,207,15,255,255,131,7,1,0,192,248,127,15,0,3,3,6,2,3,1,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,14,7,7,3,131,195,115,59,15,6,0,192,240,252,30,7,1,0,0,0,0,6,7,7,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,60,254,227,193,224,112,56,15,248,14,6,3,3,143,255,252,0,0,3,2,6,6,2,3,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,248,252,15,3,1,0,192,255,254,0,192,7,15,12,136,204,231,121,31,3,1,3,7,7,3,3,1,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,24,24,24,7,3,3,0};

static const uint8_t char_width[] = {11,7,11,11,10,11,10,11,10,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t satisfy_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
