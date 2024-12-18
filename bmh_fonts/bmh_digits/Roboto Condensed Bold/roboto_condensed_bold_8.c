// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_condensed_bold_8

#include "font.h"
#include "roboto_condensed_bold_8.h"

// '0'
static const uint8_t bitmap_48[] = {112,204,140,120};
// '1'
static const uint8_t bitmap_49[] = {8,252};
// '2'
static const uint8_t bitmap_50[] = {136,196,188,136};
// '3'
static const uint8_t bitmap_51[] = {72,164,188,72};
// '4'
static const uint8_t bitmap_52[] = {96,80,252,64};
// '5'
static const uint8_t bitmap_53[] = {96,156,180,100};
// '6'
static const uint8_t bitmap_54[] = {112,248,148,96};
// '7'
static const uint8_t bitmap_55[] = {4,196,60,12};
// '8'
static const uint8_t bitmap_56[] = {80,188,188,72};
// '9'
static const uint8_t bitmap_57[] = {24,172,236,48};
// ':'
static const uint8_t bitmap_58[] = {72};

static const uint8_t char_width[] = {4,2,4,4,4,4,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_condensed_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
