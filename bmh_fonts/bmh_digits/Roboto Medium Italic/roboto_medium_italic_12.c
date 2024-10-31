// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_medium_italic_12

#include "font.h"
#include "roboto_medium_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,56,8,8,248,240};
// '1'
static const uint8_t bitmap_49[] = {32,32,240,16};
// '2'
static const uint8_t bitmap_50[] = {48,24,8,136,248,48};
// '3'
static const uint8_t bitmap_51[] = {0,96,48,16,16,240,96};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,192,96,240,16};
// '5'
static const uint8_t bitmap_53[] = {0,128,240,144,144,144,16};
// '6'
static const uint8_t bitmap_54[] = {192,96,160,144,144};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,144,240,48};
// '8'
static const uint8_t bitmap_56[] = {0,96,248,136,136,120,48};
// '9'
static const uint8_t bitmap_57[] = {240,152,8,8,248,96};
// ':'
static const uint8_t bitmap_58[] = {0,64,96};

static const uint8_t char_width[] = {7,4,6,7,7,7,5,6,7,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_medium_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
