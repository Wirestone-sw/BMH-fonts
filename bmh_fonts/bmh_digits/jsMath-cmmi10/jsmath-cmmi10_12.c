// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmmi10_12

#include "font.h"
#include "jsmath-cmmi10_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,16,16,16,224};
// '1'
static const uint8_t bitmap_49[] = {32,32,240,0,0};
// '2'
static const uint8_t bitmap_50[] = {24,136,72,120,176};
// '3'
static const uint8_t bitmap_51[] = {96,80,16,224};
// '4'
static const uint8_t bitmap_52[] = {0,192,32,240,0};
// '5'
static const uint8_t bitmap_53[] = {240,176,160,16,0};
// '6'
static const uint8_t bitmap_54[] = {252,20,18,182,228};
// '7'
static const uint8_t bitmap_55[] = {112,32,32,224,32};
// '8'
static const uint8_t bitmap_56[] = {220,50,34,118,204};
// '9'
static const uint8_t bitmap_57[] = {224,16,16,16,224};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {5,5,5,4,5,5,5,5,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmmi10_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
