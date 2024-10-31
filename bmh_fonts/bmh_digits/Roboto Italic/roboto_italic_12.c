// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_italic_12

#include "font.h"
#include "roboto_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,16,8,8,216,96};
// '1'
static const uint8_t bitmap_49[] = {32,16,240};
// '2'
static const uint8_t bitmap_50[] = {0,48,24,8,136,120,48};
// '3'
static const uint8_t bitmap_51[] = {0,48,152,136,136,120,32};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,32,240,16};
// '5'
static const uint8_t bitmap_53[] = {0,240,144,144,144,16};
// '6'
static const uint8_t bitmap_54[] = {128,224,160,144,16};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,144,208,48};
// '8'
static const uint8_t bitmap_56[] = {0,32,240,136,136,88,48};
// '9'
static const uint8_t bitmap_57[] = {240,24,8,8,248,32};
// ':'
static const uint8_t bitmap_58[] = {0,32};

static const uint8_t char_width[] = {6,3,7,7,7,6,5,6,7,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
