// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_bold_16

#include "font.h"
#include "cousine_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,112,48,48,112,224,192,31,63,112,99,99,112,63,31};
// '1'
static const uint8_t bitmap_49[] = {192,192,96,240,240,240,0,0,96,96,96,127,127,127,96,96};
// '2'
static const uint8_t bitmap_50[] = {64,96,112,48,48,240,224,192,112,120,124,110,102,99,99,96};
// '3'
static const uint8_t bitmap_51[] = {96,112,48,48,48,240,224,224,48,56,112,99,99,119,63,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,224,112,240,240,0,0,28,31,27,24,24,127,127,24,24};
// '5'
static const uint8_t bitmap_53[] = {224,240,240,48,48,48,48,0,51,51,99,99,99,119,63,30};
// '6'
static const uint8_t bitmap_54[] = {192,224,240,48,48,112,96,64,15,63,118,99,99,115,63,30};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,48,240,240,48,0,0,120,126,15,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {224,224,240,48,48,240,240,224,60,63,99,99,99,99,63,60};
// '9'
static const uint8_t bitmap_57[] = {224,224,112,48,48,112,224,192,19,55,119,102,102,123,63,15};
// ':'
static const uint8_t bitmap_58[] = {192,192,96,96};

static const uint8_t char_width[] = {8,8,8,8,9,8,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
