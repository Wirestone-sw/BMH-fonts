// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_italic_12

#include "font.h"
#include "tinos_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,16,8,8,8,240};
// '1'
static const uint8_t bitmap_49[] = {16,240,56};
// '2'
static const uint8_t bitmap_50[] = {0,16,8,8,8,200,48};
// '3'
static const uint8_t bitmap_51[] = {16,136,136,136,120};
// '4'
static const uint8_t bitmap_52[] = {0,128,64,32,144,120,0};
// '5'
static const uint8_t bitmap_53[] = {0,112,72,72,72,136};
// '6'
static const uint8_t bitmap_54[] = {224,144,136,136,136,24};
// '7'
static const uint8_t bitmap_55[] = {16,8,8,200,40,24};
// '8'
static const uint8_t bitmap_56[] = {0,32,248,136,136,200,48};
// '9'
static const uint8_t bitmap_57[] = {0,112,136,136,136,152,240};
// ':'
static const uint8_t bitmap_58[] = {0,64};

static const uint8_t char_width[] = {6,3,7,5,7,6,6,6,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
