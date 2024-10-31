// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_bold_16

#include "font.h"
#include "roboto_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,112,48,48,112,224,192,63,127,224,192,192,224,127,63};
// '1'
static const uint8_t bitmap_49[] = {192,192,96,224,240,240,0,0,0,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {192,224,112,48,48,240,224,192,192,224,240,248,220,207,195,193};
// '3'
static const uint8_t bitmap_51[] = {96,96,48,48,48,240,224,192,96,224,198,198,198,239,127,57};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,224,112,240,240,0,8,28,31,27,25,24,255,255,24};
// '5'
static const uint8_t bitmap_53[] = {0,240,240,48,48,48,48,48,35,103,227,195,195,231,127,62};
// '6'
static const uint8_t bitmap_54[] = {128,192,224,112,48,48,0,0,63,127,230,195,195,231,127,62};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,48,48,240,240,112,0,0,128,240,252,31,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,240,48,48,240,224,192,121,127,239,198,198,239,127,121};
// '9'
static const uint8_t bitmap_57[] = {192,224,112,48,48,112,224,192,7,15,206,204,236,118,63,31};
// ':'
static const uint8_t bitmap_58[] = {192,192,128,225,225,64};

static const uint8_t char_width[] = {8,6,8,8,9,8,8,9,8,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
