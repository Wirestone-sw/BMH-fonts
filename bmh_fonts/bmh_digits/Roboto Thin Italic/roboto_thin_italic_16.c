// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_thin_italic_16

#include "font.h"
#include "roboto_thin_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,64,32,16,16,16,96,128,127,128,128,128,192,96,31,0};
// '1'
static const uint8_t bitmap_49[] = {32,32,16,240,0,128,124,3};
// '2'
static const uint8_t bitmap_50[] = {0,192,32,32,16,16,16,224,128,192,160,144,136,132,130,1};
// '3'
static const uint8_t bitmap_51[] = {0,64,32,32,16,16,16,160,64,32,64,128,132,130,130,70,57,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,64,32,240,24,0,8,14,9,8,8,120,15,8,8};
// '5'
static const uint8_t bitmap_53[] = {0,192,48,16,16,16,16,16,112,131,129,129,129,65,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,32,16,16,16,127,130,129,129,129,65,62};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,144,80,48,192,48,8,6,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,32,32,16,16,16,176,64,56,72,133,130,130,130,70,57,0};
// '9'
static const uint8_t bitmap_57[] = {192,32,32,16,16,16,224,7,136,136,72,72,52,15};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,128,0,0};

static const uint8_t char_width[] = {8,4,8,9,9,8,7,7,9,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_thin_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
