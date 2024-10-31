// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font yellowtail_regular_20

#include "font.h"
#include "yellowtail_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,48,24,200,100,226,254,62};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,0,0,208,120,60,14,6};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,48,24,204,230,114,58,30,14};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,0,32,56,200,204,230,178,26,14};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,128,192,224,176,152,204,244,186,143,7,1};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,240,220,206,198,134,6,6};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,192,224,240,184,92,206,198,7,3};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,2,2,195,227,51,31,15,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,248,254,230,51,27,15,12,6,2};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,224,248,204,70,226,225,121,63,15};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128,192,64};

static const uint8_t char_width[] = {11,8,11,10,11,11,11,9,13,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t yellowtail_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
