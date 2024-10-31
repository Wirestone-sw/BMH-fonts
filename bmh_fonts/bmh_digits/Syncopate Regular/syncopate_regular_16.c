// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font syncopate_regular_16

#include "font.h"
#include "syncopate_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {224,16,8,4,4,4,4,4,8,16,224,3,4,8,16,16,16,16,16,8,4,3};
// '1'
static const uint8_t bitmap_49[] = {8,8,4,252,0,0,0,31};
// '2'
static const uint8_t bitmap_50[] = {8,4,4,4,4,4,4,4,136,112,16,24,24,20,20,18,18,17,16,16};
// '3'
static const uint8_t bitmap_51[] = {8,4,4,132,132,132,132,132,72,48,8,16,16,16,16,16,16,17,9,6};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,64,32,16,8,4,252,0,0,2,3,2,2,2,2,2,2,31,2,2};
// '5'
static const uint8_t bitmap_53[] = {124,68,68,68,68,68,68,68,132,0,8,16,16,16,16,16,16,16,8,7};
// '6'
static const uint8_t bitmap_54[] = {224,144,136,68,68,68,68,68,68,136,0,3,4,8,16,16,16,16,16,16,8,7};
// '7'
static const uint8_t bitmap_55[] = {4,4,4,4,4,4,196,36,28,4,0,0,16,8,6,1,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,48,72,68,132,132,132,68,72,48,0,6,9,17,17,16,16,16,17,17,9,6};
// '9'
static const uint8_t bitmap_57[] = {112,136,4,4,4,4,4,4,136,144,224,0,8,17,17,17,17,17,17,8,4,3};
// ':'
static const uint8_t bitmap_58[] = {96,24};

static const uint8_t char_width[] = {11,4,10,10,11,10,11,10,11,11,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t syncopate_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
