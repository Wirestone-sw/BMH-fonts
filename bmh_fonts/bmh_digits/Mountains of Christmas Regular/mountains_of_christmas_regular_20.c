// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font mountains_of_christmas_regular_20

#include "font.h"
#include "mountains_of_christmas_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,112,200,4,4,4,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,32,16,16,16,254,252};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,62,33,25,1,227,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,33,17,41,229,131,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,192,120,15,248,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,254,254,66,66,130,2};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,128,224,16,8,4,4,4,8};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,2,2,34,34,194,122,78,66};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,128,192,60,34,34,100,152};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,24,62,66,34,46,248,224};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,64,96,64};

static const uint8_t char_width[] = {6,6,6,7,8,6,8,8,7,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t mountains_of_christmas_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
