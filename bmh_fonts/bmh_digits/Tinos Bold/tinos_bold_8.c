// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_8

#include "font.h"
#include "tinos_bold_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,132,204,120};
// '1'
static const uint8_t bitmap_49[] = {4,252};
// '2'
static const uint8_t bitmap_50[] = {128,196,188,136};
// '3'
static const uint8_t bitmap_51[] = {132,164,188,64};
// '4'
static const uint8_t bitmap_52[] = {96,80,252,64};
// '5'
static const uint8_t bitmap_53[] = {136,148,148,96};
// '6'
static const uint8_t bitmap_54[] = {120,220,148,96};
// '7'
static const uint8_t bitmap_55[] = {4,196,52,12};
// '8'
static const uint8_t bitmap_56[] = {72,188,188,72};
// '9'
static const uint8_t bitmap_57[] = {152,164,236,56};
// ':'
static const uint8_t bitmap_58[] = {144};

static const uint8_t char_width[] = {4,2,4,4,4,4,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
