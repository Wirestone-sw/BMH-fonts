// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font coming_soon_regular_12

#include "font.h"
#include "coming_soon_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,16,16,32,64,128};
// '1'
static const uint8_t bitmap_49[] = {16,224};
// '2'
static const uint8_t bitmap_50[] = {64,32,16,16,16,32,192};
// '3'
static const uint8_t bitmap_51[] = {16,16,16,144,80,48,0};
// '4'
static const uint8_t bitmap_52[] = {224,0,0,0,16,224,0};
// '5'
static const uint8_t bitmap_53[] = {224,16,16,16,16,16,0};
// '6'
static const uint8_t bitmap_54[] = {192,32,144,144,80,144,144,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,208,32};
// '8'
static const uint8_t bitmap_56[] = {224,32,16,0,32,192,0};
// '9'
static const uint8_t bitmap_57[] = {192,48,16,16,16,16,32,192};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {6,2,7,7,7,7,8,5,7,8,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t coming_soon_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
