// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_bold_16

#include "font.h"
#include "mountains_of_christmas_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,15,27,17,17,15};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,128,2,2,1,255,127};
// '2'
static const uint8_t bitmap_50[] = {0,128,64,128,128,0,3,4,130,240,127,15};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,128,128,128,128,72,76,142,243,225};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,128,240,188,135,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,128,128,0,63,191,17,16,240,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,248,222,194,65,65,128};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,0,0,244,60,15,9};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,128,0,0,248,15,5,4,143,240};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,128,0,207,136,136,71,62};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,8};

static const uint8_t char_width[] = {5,5,6,6,7,6,6,6,6,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
