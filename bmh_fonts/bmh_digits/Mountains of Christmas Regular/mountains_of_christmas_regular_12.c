// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_regular_12

#include "font.h"
#include "mountains_of_christmas_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,64,192};
// '1'
static const uint8_t bitmap_49[] = {0,128,192};
// '2'
static const uint8_t bitmap_50[] = {192,160,32,192};
// '3'
static const uint8_t bitmap_51[] = {0,160,224,32,32};
// '4'
static const uint8_t bitmap_52[] = {0,0,224,0,0};
// '5'
static const uint8_t bitmap_53[] = {192,64,64};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,64};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,192,64};
// '8'
static const uint8_t bitmap_56[] = {64,160,160,64};
// '9'
static const uint8_t bitmap_57[] = {128,64,128,0};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {3,3,4,5,5,3,4,5,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
