// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crushed_regular_12

#include "font.h"
#include "crushed_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,8,8,240};
// '1'
static const uint8_t bitmap_49[] = {8,248};
// '2'
static const uint8_t bitmap_50[] = {24,8,8,240};
// '3'
static const uint8_t bitmap_51[] = {24,136,136,112};
// '4'
static const uint8_t bitmap_52[] = {0,192,48,248,0};
// '5'
static const uint8_t bitmap_53[] = {248,72,72,136,0};
// '6'
static const uint8_t bitmap_54[] = {128,240,72,136,136};
// '7'
static const uint8_t bitmap_55[] = {8,8,200,56};
// '8'
static const uint8_t bitmap_56[] = {0,248,136,200,48};
// '9'
static const uint8_t bitmap_57[] = {96,152,8,24,224};
// ':'
static const uint8_t bitmap_58[] = {64};

static const uint8_t char_width[] = {5,2,4,4,5,5,5,4,5,5,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crushed_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
