// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font yellowtail_regular_16

#include "font.h"
#include "yellowtail_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,128,64,192,192,224,248,28,134,65,44,28,7,1};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,128,128,192,112,26,15,3,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,128,128,128,128,192,230,179,153,12,6,3};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,128,128,128,128,0,6,155,153,116,2,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,192,24,28,214,123,29,30,25,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,128,128,128,128,128,128,0,12,142,73,56,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,128,128,192,64,224,16,140,198,101,28,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,128,192,192,192,192,192,192,112,24,12,3,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,64,64,192,128,192,64,192,224,48,31,156,118,3,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,128,128,64,64,192,128,206,107,57,28,12,6,1};
// ':'
static const uint8_t bitmap_58[] = {0,0,8,8};

static const uint8_t char_width[] = {9,6,7,8,8,9,9,7,11,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t yellowtail_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
