// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_bold_12

#include "font.h"
#include "mountains_of_christmas_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,64,64,128};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,128};
// '2'
static const uint8_t bitmap_50[] = {192,160,32,192};
// '3'
static const uint8_t bitmap_51[] = {0,160,224,96};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,0};
// '5'
static const uint8_t bitmap_53[] = {224,32,32,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,64};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,192,64};
// '8'
static const uint8_t bitmap_56[] = {0,0,224,160,64};
// '9'
static const uint8_t bitmap_57[] = {0,128,64,128,0};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {5,4,4,4,5,4,4,5,5,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
