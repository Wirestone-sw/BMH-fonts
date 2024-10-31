// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_light_20

#include "font.h"
#include "roboto_condensed_light_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,64,32,32,32,64,128,0,252,255,0,0,0,0,0,255,252};
// '1'
static const uint8_t bitmap_49[] = {128,64,64,224,224,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,192,96,32,32,32,64,192,3,1,0,0,128,96,48,15};
// '3'
static const uint8_t bitmap_51[] = {0,192,96,32,32,32,64,192,0,1,1,0,16,16,16,40,231,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,224,0,0,128,96,56,14,3,0,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,224,32,32,32,32,32,32,28,31,8,8,8,24,48,192};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,32,32,32,0,0,255,9,4,4,4,12,120,224};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,32,32,32,32,224,32,0,0,0,0,192,56,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,96,32,32,32,96,192,0,128,239,40,16,16,16,40,239,128};
// '9'
static const uint8_t bitmap_57[] = {0,192,96,32,32,32,192,128,30,115,192,128,128,128,64,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,6,6};

static const uint8_t char_width[] = {9,5,8,9,9,8,8,9,9,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_light_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
