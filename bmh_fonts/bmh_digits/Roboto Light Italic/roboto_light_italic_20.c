// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_light_italic_20

#include "font.h"
#include "roboto_light_italic_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,192,32,16,16,16,16,32,192,240,63,0,0,0,0,0,0,224,63};
// '1'
static const uint8_t bitmap_49[] = {128,64,64,64,224,96,0,0,0,248,31,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,128,96,32,16,16,16,16,32,192,0,0,1,0,128,192,96,48,24,14,3};
// '3'
static const uint8_t bitmap_51[] = {0,128,224,32,16,16,16,16,32,224,0,0,0,16,8,8,8,20,246,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,192,224,32,0,128,64,48,24,12,2,1,248,15,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,224,32,32,32,32,32,32,32,0,0,30,19,8,8,8,24,240,192,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,64,32,32,32,0,192,252,11,9,4,4,4,12,248,224};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,32,32,32,32,32,224,96,0,0,0,128,96,56,12,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,32,16,16,16,16,48,224,192,49,23,12,8,8,8,20,244,3};
// '9'
static const uint8_t bitmap_57[] = {128,192,32,16,16,16,16,96,192,31,32,64,64,64,64,160,248,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,3,3};

static const uint8_t char_width[] = {10,6,11,10,11,11,10,10,10,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_light_italic_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
