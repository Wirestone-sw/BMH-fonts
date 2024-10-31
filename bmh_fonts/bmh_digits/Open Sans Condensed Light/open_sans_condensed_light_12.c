// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_condensed_light_12

#include "font.h"
#include "open_sans_condensed_light_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,32,224};
// '1'
static const uint8_t bitmap_49[] = {64,224};
// '2'
static const uint8_t bitmap_50[] = {32,32,224};
// '3'
static const uint8_t bitmap_51[] = {32,32,224};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,224,0};
// '5'
static const uint8_t bitmap_53[] = {224,32,32};
// '6'
static const uint8_t bitmap_54[] = {192,32,32};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,160,96};
// '8'
static const uint8_t bitmap_56[] = {128,96,32,96,128};
// '9'
static const uint8_t bitmap_57[] = {128,96,32,224};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {3,2,3,3,5,3,3,5,5,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_condensed_light_12 = {
    12,
    char_values,
    char_addr,
    char_width
};