// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_light_italic_12

#include "font.h"
#include "roboto_light_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,16,8,8,152,96};
// '1'
static const uint8_t bitmap_49[] = {32,16,240};
// '2'
static const uint8_t bitmap_50[] = {0,48,24,8,136,120};
// '3'
static const uint8_t bitmap_51[] = {0,32,24,136,136,88,32};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,64,32,240,0};
// '5'
static const uint8_t bitmap_53[] = {0,240,144,144,16,16};
// '6'
static const uint8_t bitmap_54[] = {192,160,160,144,16};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,144,80,48};
// '8'
static const uint8_t bitmap_56[] = {0,96,144,136,136,72,48};
// '9'
static const uint8_t bitmap_57[] = {224,24,8,8,248,64};
// ':'
static const uint8_t bitmap_58[] = {64};

static const uint8_t char_width[] = {6,3,6,7,7,6,5,6,7,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_light_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
