// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_thin_italic_24

#include "font.h"
#include "roboto_thin_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,48,12,2,2,1,1,1,1,2,252,252,3,0,0,0,0,0,0,0,192,60,3,0,3,2,4,4,4,4,2,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {4,2,2,2,249,7,0,0,128,126,1,0,0,0,7,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,48,8,4,2,1,1,1,1,3,198,56,0,0,128,64,32,16,8,4,2,1,0,0,6,5,4,4,4,4,4,4,4,4,4,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,24,4,2,1,1,1,1,129,66,60,192,0,0,0,1,1,1,1,3,130,124,0,1,2,2,4,4,4,4,2,2,1,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,64,32,16,8,6,241,15,0,24,20,18,17,16,16,16,16,252,19,16,16,0,0,0,0,0,0,0,3,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,128,120,135,129,129,129,129,1,1,1,1,192,1,1,0,0,0,0,0,1,254,16,0,1,2,4,4,4,4,4,2,1,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,96,16,8,132,130,130,129,1,1,248,7,2,1,1,0,0,0,0,129,126,0,1,2,4,4,4,4,6,2,1,0};
// '7'
static const uint8_t bitmap_55[] = {1,1,1,1,1,1,129,97,25,5,3,0,128,64,48,12,3,0,0,0,0,0,6,1,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,120,132,2,1,1,1,1,129,66,62,248,4,2,2,1,1,1,1,3,2,252,0,1,2,4,4,4,4,4,2,2,1,0,0};
// '9'
static const uint8_t bitmap_57[] = {240,8,4,2,1,1,1,1,3,6,248,7,8,24,16,16,16,16,136,100,30,3,0,4,4,4,2,2,1,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,64,64,0,0,0,0,4,4,0,0};

static const uint8_t char_width[] = {12,6,12,12,12,12,11,11,12,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_thin_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
