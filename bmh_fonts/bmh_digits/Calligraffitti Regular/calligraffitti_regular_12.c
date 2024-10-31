// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font calligraffitti_regular_12

#include "font.h"
#include "calligraffitti_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {128,96,16,8,8,240};
// '1'
static const uint8_t bitmap_49[] = {0,208,56};
// '2'
static const uint8_t bitmap_50[] = {0,32,16,8,200,56};
// '3'
static const uint8_t bitmap_51[] = {16,136,136,200,48};
// '4'
static const uint8_t bitmap_52[] = {0,128,64,48,8,192,32,128};
// '5'
static const uint8_t bitmap_53[] = {64,48,44,36,36,196,4};
// '6'
static const uint8_t bitmap_54[] = {192,160,144,136,0};
// '7'
static const uint8_t bitmap_55[] = {4,4,132,68,52,12,4};
// '8'
static const uint8_t bitmap_56[] = {0,0,224,80,200,56};
// '9'
static const uint8_t bitmap_57[] = {192,32,16,8,240};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {6,3,6,5,8,7,5,7,6,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t calligraffitti_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
