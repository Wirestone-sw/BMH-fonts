// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font irish_grover_regular_12

#include "font.h"
#include "irish_grover_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,240,24,8,8,248,240};
// '1'
static const uint8_t bitmap_49[] = {16,240,248,0};
// '2'
static const uint8_t bitmap_50[] = {120,8,8,216,248,112};
// '3'
static const uint8_t bitmap_51[] = {40,24,136,136,248,248,0};
// '4'
static const uint8_t bitmap_52[] = {128,224,184,136,248,128,192};
// '5'
static const uint8_t bitmap_53[] = {0,248,136,72,72,184};
// '6'
static const uint8_t bitmap_54[] = {128,224,48,152,152,160,0};
// '7'
static const uint8_t bitmap_55[] = {40,24,8,136,232,56,8};
// '8'
static const uint8_t bitmap_56[] = {0,112,216,136,136,248,48};
// '9'
static const uint8_t bitmap_57[] = {96,248,24,8,248,240};
// ':'
static const uint8_t bitmap_58[] = {0};

static const uint8_t char_width[] = {7,4,6,7,7,6,7,7,7,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t irish_grover_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
