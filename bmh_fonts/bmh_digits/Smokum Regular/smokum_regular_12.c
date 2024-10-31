// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font smokum_regular_12

#include "font.h"
#include "smokum_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {224,48,48,240};
// '1'
static const uint8_t bitmap_49[] = {96,96,144,0};
// '2'
static const uint8_t bitmap_50[] = {112,48,48,240};
// '3'
static const uint8_t bitmap_51[] = {112,48,48,240};
// '4'
static const uint8_t bitmap_52[] = {240,240,48,0};
// '5'
static const uint8_t bitmap_53[] = {192,48,48,112};
// '6'
static const uint8_t bitmap_54[] = {224,48,48,112};
// '7'
static const uint8_t bitmap_55[] = {112,112,112,240};
// '8'
static const uint8_t bitmap_56[] = {224,48,48,240};
// '9'
static const uint8_t bitmap_57[] = {224,48,48,224};
// ':'
static const uint8_t bitmap_58[] = {128,128};

static const uint8_t char_width[] = {4,4,4,4,4,4,4,4,4,4,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t smokum_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
