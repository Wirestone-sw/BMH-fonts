// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font permanent_marker_regular_20

#include "font.h"
#include "permanent_marker_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,192,224,240,248,124,126,127,254,252,192,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,223,255,254,252};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,4,28,62,30,30,158,222,222,254,252,248,112};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,60,60,252,252,254,254,254,126,126,62,24};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,120,248,240,128,128,128,240,255,254,136,192,128};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,240,248,252,252,254,124,120,120,56,56,60,56,16};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,224,240,252,124,30,30,8,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,30,30,30,30,30,30,60,252,248,240,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,48,252,254,255,207,207,255,254,240,127,127,28};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,240,248,252,254,239,239,239,255,254,248,96};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,128,0};

static const uint8_t char_width[] = {14,5,12,11,12,14,9,14,12,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t permanent_marker_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
