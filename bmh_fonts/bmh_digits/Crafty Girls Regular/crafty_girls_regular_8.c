// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crafty_girls_regular_8

#include "font.h"
#include "crafty_girls_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,132,132,120};
// '1'
static const uint8_t bitmap_49[] = {248};
// '2'
static const uint8_t bitmap_50[] = {176,200,72,184};
// '3'
static const uint8_t bitmap_51[] = {152,36,36,248};
// '4'
static const uint8_t bitmap_52[] = {64,56,32,252,64};
// '5'
static const uint8_t bitmap_53[] = {32,92,76,60};
// '6'
static const uint8_t bitmap_54[] = {84,84,120};
// '7'
static const uint8_t bitmap_55[] = {16,136,104,40,56};
// '8'
static const uint8_t bitmap_56[] = {64,184,168,120};
// '9'
static const uint8_t bitmap_57[] = {176,168,104,48};
// ':'
static const uint8_t bitmap_58[] = {};

static const uint8_t char_width[] = {4,1,4,4,5,4,3,5,4,4,-6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crafty_girls_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
