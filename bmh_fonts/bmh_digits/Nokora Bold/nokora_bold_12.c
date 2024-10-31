// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_bold_12

#include "font.h"
#include "nokora_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,248,24,8,24,248,224};
// '1'
static const uint8_t bitmap_49[] = {48,48,248,248};
// '2'
static const uint8_t bitmap_50[] = {24,8,136,216,248,0};
// '3'
static const uint8_t bitmap_51[] = {8,24,136,200,248,248,0};
// '4'
static const uint8_t bitmap_52[] = {0,192,96,56,248,248,0};
// '5'
static const uint8_t bitmap_53[] = {248,248,200,200,136,0};
// '6'
static const uint8_t bitmap_54[] = {128,240,152,72,200,200,128};
// '7'
static const uint8_t bitmap_55[] = {8,8,8,136,232,120,24};
// '8'
static const uint8_t bitmap_56[] = {0,120,248,200,248,120,0};
// '9'
static const uint8_t bitmap_57[] = {96,248,152,136,152,248,224};
// ':'
static const uint8_t bitmap_58[] = {96,96};

static const uint8_t char_width[] = {7,4,6,7,7,6,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t nokora_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
