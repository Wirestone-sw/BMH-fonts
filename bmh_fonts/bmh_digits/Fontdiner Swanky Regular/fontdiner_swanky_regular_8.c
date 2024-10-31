// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font fontdiner_swanky_regular_8

#include "font.h"
#include "fontdiner_swanky_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {112,248,136,136,248,112};
// '1'
static const uint8_t bitmap_49[] = {8,24,248};
// '2'
static const uint8_t bitmap_50[] = {200,164,164,248};
// '3'
static const uint8_t bitmap_51[] = {136,164,248,88};
// '4'
static const uint8_t bitmap_52[] = {112,248,252,224};
// '5'
static const uint8_t bitmap_53[] = {240,40,40,232,216};
// '6'
static const uint8_t bitmap_54[] = {224,112,40,112,236};
// '7'
static const uint8_t bitmap_55[] = {56,8,136,248,24};
// '8'
static const uint8_t bitmap_56[] = {160,240,72,120,176};
// '9'
static const uint8_t bitmap_57[] = {240,88,136,240,240};
// ':'
static const uint8_t bitmap_58[] = {192,64};

static const uint8_t char_width[] = {6,3,4,4,4,5,5,5,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t fontdiner_swanky_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
