// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmsy10_8

#include "font.h"
#include "jsmath-cmsy10_8.h"

// '0'
static const uint8_t bitmap_48[] = {48,12};
// '1'
static const uint8_t bitmap_49[] = {112,72,80,80,112,72};
// '2'
static const uint8_t bitmap_50[] = {120,148,148,148};
// '3'
static const uint8_t bitmap_51[] = {148,148,220,48};
// '4'
static const uint8_t bitmap_52[] = {96,88,70,70,88,96};
// '5'
static const uint8_t bitmap_53[] = {24,104,136,136,104,24};
// '6'
static const uint8_t bitmap_54[] = {192,48,12,2};
// '7'
static const uint8_t bitmap_55[] = {48};
// '8'
static const uint8_t bitmap_56[] = {22,104,56,14};
// '9'
static const uint8_t bitmap_57[] = {82,82,126};
// ':'
static const uint8_t bitmap_58[] = {16,16,16,112};

static const uint8_t char_width[] = {2,6,4,4,6,6,4,1,4,3,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmsy10_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
