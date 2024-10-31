// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font permanent_marker_regular_12

#include "font.h"
#include "permanent_marker_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,192,224,192,0};
// '1'
static const uint8_t bitmap_49[] = {224,192,0};
// '2'
static const uint8_t bitmap_50[] = {96,96,96,96,224,224,192,0};
// '3'
static const uint8_t bitmap_51[] = {224,224,224,224,224,96};
// '4'
static const uint8_t bitmap_52[] = {192,0,0,128,224,0};
// '5'
static const uint8_t bitmap_53[] = {192,224,224,224,192,224,224,64};
// '6'
static const uint8_t bitmap_54[] = {128,224,96,96,0};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,224,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,192,192,192,128,192,128};
// '9'
static const uint8_t bitmap_57[] = {128,192,192,192,192,0};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {8,3,8,6,6,8,5,8,7,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t permanent_marker_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
