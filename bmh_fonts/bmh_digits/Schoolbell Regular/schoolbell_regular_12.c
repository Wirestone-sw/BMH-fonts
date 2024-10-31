// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font schoolbell_regular_12

#include "font.h"
#include "schoolbell_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {192,96,16,16,32,192};
// '1'
static const uint8_t bitmap_49[] = {248};
// '2'
static const uint8_t bitmap_50[] = {0,8,8,8,136,112};
// '3'
static const uint8_t bitmap_51[] = {0,8,200,200,168,48};
// '4'
static const uint8_t bitmap_52[] = {248,128,128,152,224,128};
// '5'
static const uint8_t bitmap_53[] = {96,88,200,136,136,8,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,48,24,0,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,240,16};
// '8'
static const uint8_t bitmap_56[] = {56,232,104,184,12};
// '9'
static const uint8_t bitmap_57[] = {128,96,16,16,248};
// ':'
static const uint8_t bitmap_58[] = {0,0};

static const uint8_t char_width[] = {6,1,6,6,6,7,6,6,5,5,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t schoolbell_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
