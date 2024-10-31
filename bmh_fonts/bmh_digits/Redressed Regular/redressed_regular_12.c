// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font redressed_regular_12

#include "font.h"
#include "redressed_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {240,8,8,8,8,48,224};
// '1'
static const uint8_t bitmap_49[] = {16,8,248};
// '2'
static const uint8_t bitmap_50[] = {16,8,8,8,24,248};
// '3'
static const uint8_t bitmap_51[] = {16,136,136,232,184,0};
// '4'
static const uint8_t bitmap_52[] = {128,96,16,248,248,0};
// '5'
static const uint8_t bitmap_53[] = {192,120,72,72,136,8};
// '6'
static const uint8_t bitmap_54[] = {192,160,80,72,200,136,0};
// '7'
static const uint8_t bitmap_55[] = {16,8,8,200,40,24,8};
// '8'
static const uint8_t bitmap_56[] = {0,48,232,200,200,184,0};
// '9'
static const uint8_t bitmap_57[] = {96,240,8,8,8,24,240};
// ':'
static const uint8_t bitmap_58[] = {128};

static const uint8_t char_width[] = {7,3,6,6,6,6,7,7,7,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t redressed_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
