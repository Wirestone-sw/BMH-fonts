// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font creepster_caps_regular_12

#include "font.h"
#include "creepster_caps_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {240,112,120,240,224};
// '1'
static const uint8_t bitmap_49[] = {32,240,248,16};
// '2'
static const uint8_t bitmap_50[] = {96,240,120,240,240};
// '3'
static const uint8_t bitmap_51[] = {96,112,120,248,224,0};
// '4'
static const uint8_t bitmap_52[] = {192,248,240,248};
// '5'
static const uint8_t bitmap_53[] = {240,240,112,112,248};
// '6'
static const uint8_t bitmap_54[] = {192,240,120,112,112};
// '7'
static const uint8_t bitmap_55[] = {112,112,112,240,240};
// '8'
static const uint8_t bitmap_56[] = {240,240,112,248,240};
// '9'
static const uint8_t bitmap_57[] = {224,240,184,184,240};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {5,4,5,6,4,5,5,5,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t creepster_caps_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
