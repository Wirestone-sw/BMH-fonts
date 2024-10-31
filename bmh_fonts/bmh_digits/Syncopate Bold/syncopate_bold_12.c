// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font syncopate_bold_12

#include "font.h"
#include "syncopate_bold_12.h"

// '0'
static const uint8_t bitmap_48[] = {248,252,140,6,6,6,6,142};
// '1'
static const uint8_t bitmap_49[] = {14,6,254,254};
// '2'
static const uint8_t bitmap_50[] = {12,6,134,134,198,102,126,60};
// '3'
static const uint8_t bitmap_51[] = {142,6,6,54,54,54,254,204};
// '4'
static const uint8_t bitmap_52[] = {192,224,240,248,220,206,254,254,192};
// '5'
static const uint8_t bitmap_53[] = {190,62,54,54,54,54,246,230};
// '6'
static const uint8_t bitmap_54[] = {248,252,172,54,54,54,54,254};
// '7'
static const uint8_t bitmap_55[] = {6,6,6,134,198,246,126,30,6};
// '8'
static const uint8_t bitmap_56[] = {192,236,62,54,38,38,38,62};
// '9'
static const uint8_t bitmap_57[] = {188,124,102,102,102,102,174,252};
// ':'
static const uint8_t bitmap_58[] = {48,48};

static const uint8_t char_width[] = {8,4,8,8,9,8,8,9,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t syncopate_bold_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
