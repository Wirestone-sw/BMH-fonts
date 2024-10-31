// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font special_elite_regular_12

#include "font.h"
#include "special_elite_regular_12.h"

// '0'
static const uint8_t bitmap_48[] = {254,129,1,1,129,126};
// '1'
static const uint8_t bitmap_49[] = {0,1,1,255,8,0,0};
// '2'
static const uint8_t bitmap_50[] = {156,74,34,34,28,8};
// '3'
static const uint8_t bitmap_51[] = {195,25,13,11,145,96};
// '4'
static const uint8_t bitmap_52[] = {96,48,108,70,97,255,64,64};
// '5'
static const uint8_t bitmap_53[] = {190,18,18,18,162,64};
// '6'
static const uint8_t bitmap_54[] = {252,147,9,9,151,226};
// '7'
static const uint8_t bitmap_55[] = {12,6,2,131,98,26,6};
// '8'
static const uint8_t bitmap_56[] = {254,153,9,9,153,230};
// '9'
static const uint8_t bitmap_57[] = {206,209,17,145,221,60};
// ':'
static const uint8_t bitmap_58[] = {176,184,128};

static const uint8_t char_width[] = {6,7,6,6,8,6,6,7,6,6,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t special_elite_regular_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
