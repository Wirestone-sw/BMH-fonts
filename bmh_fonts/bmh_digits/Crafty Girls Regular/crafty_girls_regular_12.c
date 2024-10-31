// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crafty_girls_regular_12

#include "font.h"
#include "crafty_girls_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,32,16,16,16,32,192};
// '1'
static const uint8_t bitmap_49[] = {128,240};
// '2'
static const uint8_t bitmap_50[] = {192,48,16,16,224};
// '3'
static const uint8_t bitmap_51[] = {192,32,16,16,224,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,240,0,0,240,0};
// '5'
static const uint8_t bitmap_53[] = {248,72,72,72,136,0};
// '6'
static const uint8_t bitmap_54[] = {192,32,144,144,144,96};
// '7'
static const uint8_t bitmap_55[] = {32,16,16,16,16,144,112};
// '8'
static const uint8_t bitmap_56[] = {224,16,16,16,16,224};
// '9'
static const uint8_t bitmap_57[] = {192,32,16,16,16,32,192};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {7,2,5,6,8,6,6,7,6,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crafty_girls_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
