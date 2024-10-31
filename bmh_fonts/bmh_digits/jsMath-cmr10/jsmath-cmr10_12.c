// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmr10_12

#include "font.h"
#include "jsmath-cmr10_12.h"

// '0'
static const uint8_t bitmap_48[] = {252,4,2,4,252};
// '1'
static const uint8_t bitmap_49[] = {4,4,254,0,0};
// '2'
static const uint8_t bitmap_50[] = {142,130,98,62,156};
// '3'
static const uint8_t bitmap_51[] = {140,42,34,220,200};
// '4'
static const uint8_t bitmap_52[] = {224,144,136,254,128};
// '5'
static const uint8_t bitmap_53[] = {190,36,36,230,192};
// '6'
static const uint8_t bitmap_54[] = {248,36,18,238,196};
// '7'
static const uint8_t bitmap_55[] = {14,132,228,28,4};
// '8'
static const uint8_t bitmap_56[] = {220,50,98,118,204};
// '9'
static const uint8_t bitmap_57[] = {56,124,130,66,252};
// ':'
static const uint8_t bitmap_58[] = {48,32};

static const uint8_t char_width[] = {5,5,5,5,5,5,5,5,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmr10_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
