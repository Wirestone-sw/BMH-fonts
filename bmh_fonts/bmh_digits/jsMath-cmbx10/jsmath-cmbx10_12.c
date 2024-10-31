// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmbx10_12

#include "font.h"
#include "jsmath-cmbx10_12.h"

// '0'
static const uint8_t bitmap_48[] = {248,252,2,4,252,248};
// '1'
static const uint8_t bitmap_49[] = {4,4,252,254,0,0};
// '2'
static const uint8_t bitmap_50[] = {24,12,134,70,62,188};
// '3'
static const uint8_t bitmap_51[] = {128,142,42,50,254,204};
// '4'
static const uint8_t bitmap_52[] = {128,192,176,136,252,254,128};
// '5'
static const uint8_t bitmap_53[] = {2,124,44,44,36,226,192};
// '6'
static const uint8_t bitmap_54[] = {248,252,18,18,254,236};
// '7'
static const uint8_t bitmap_55[] = {32,30,140,236,28,12,4};
// '8'
static const uint8_t bitmap_56[] = {216,124,114,98,254,192};
// '9'
static const uint8_t bitmap_57[] = {60,252,66,66,252,248};
// ':'
static const uint8_t bitmap_58[] = {48,48};

static const uint8_t char_width[] = {6,6,6,6,7,7,6,7,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmbx10_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
