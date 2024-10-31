// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font yellowtail_regular_12

#include "font.h"
#include "yellowtail_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,64,32,224,64};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,192};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,64,192,192};
// '3'
static const uint8_t bitmap_51[] = {128,192,64,160,96};
// '4'
static const uint8_t bitmap_52[] = {0,128,128,64,224,32};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,192,96,96,64};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,64,32,32};
// '7'
static const uint8_t bitmap_55[] = {0,0,32,160,224,32};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,192,160,96,64,32};
// '9'
static const uint8_t bitmap_57[] = {0,192,64,32,224};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {7,4,6,5,6,7,7,6,8,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t yellowtail_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
