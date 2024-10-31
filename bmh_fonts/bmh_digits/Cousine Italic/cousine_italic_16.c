// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_italic_16

#include "font.h"
#include "cousine_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,96,48,16,16,48,224,192,63,127,64,67,67,32,56,15,1};
// '1'
static const uint8_t bitmap_49[] = {0,64,64,96,32,240,16,0,64,64,64,96,127,67,64,64};
// '2'
static const uint8_t bitmap_50[] = {0,0,64,96,48,16,16,48,240,64,64,96,112,88,72,68,70,67,1,0};
// '3'
static const uint8_t bitmap_51[] = {0,64,96,48,16,16,48,240,64,48,96,64,66,66,102,61,25,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,64,32,240,112,12,14,9,8,72,126,15,8};
// '5'
static const uint8_t bitmap_53[] = {0,192,240,16,16,16,16,16,16,48,99,66,65,65,33,63,30,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,224,32,16,16,48,112,64,30,127,98,65,65,97,63,30,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,144,208,112,48,112,28,6,3,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,224,48,16,16,16,240,64,56,109,71,66,66,98,61,29,0};
// '9'
static const uint8_t bitmap_57[] = {0,192,96,48,16,16,48,224,128,48,115,70,68,100,50,30,15,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192,64,96,32,0};

static const uint8_t char_width[] = {9,8,10,9,8,9,9,7,9,9,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
