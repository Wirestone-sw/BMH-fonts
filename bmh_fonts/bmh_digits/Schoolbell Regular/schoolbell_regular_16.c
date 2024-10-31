// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font schoolbell_regular_16

#include "font.h"
#include "schoolbell_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,64,96,96,64,128,127,192,128,128,224,63};
// '1'
static const uint8_t bitmap_49[] = {0,240,224,127};
// '2'
static const uint8_t bitmap_50[] = {0,64,96,96,96,96,192,128,128,192,224,160,144,140,135,131};
// '3'
static const uint8_t bitmap_51[] = {0,48,16,16,16,176,224,64,64,192,130,130,135,197,76,120};
// '4'
static const uint8_t bitmap_52[] = {240,0,0,0,0,240,0,0,7,4,4,4,4,255,4,4};
// '5'
static const uint8_t bitmap_53[] = {0,192,64,96,96,96,96,0,0,2,7,132,132,132,140,136,216,112};
// '6'
static const uint8_t bitmap_54[] = {0,192,112,16,0,0,0,254,135,132,196,68,108,56};
// '7'
static const uint8_t bitmap_55[] = {64,96,96,96,96,96,224,0,0,0,128,240,31,1};
// '8'
static const uint8_t bitmap_56[] = {96,176,48,144,208,120,24,120,140,135,131,134,252,32};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,96,32,32,224,4,15,8,8,8,206,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,132};

static const uint8_t char_width[] = {6,2,8,8,8,9,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t schoolbell_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
