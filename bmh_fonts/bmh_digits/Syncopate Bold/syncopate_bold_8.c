// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font syncopate_bold_8

#include "font.h"
#include "syncopate_bold_8.h"

// '0'
static const uint8_t bitmap_48[] = {16,60,68,70,68,124};
// '1'
static const uint8_t bitmap_49[] = {2,2,62};
// '2'
static const uint8_t bitmap_50[] = {68,100,102,116,92,76};
// '3'
static const uint8_t bitmap_51[] = {100,68,86,84,124,36};
// '4'
static const uint8_t bitmap_52[] = {24,28,22,18,62,16};
// '5'
static const uint8_t bitmap_53[] = {32,46,46,42,42,26};
// '6'
static const uint8_t bitmap_54[] = {16,124,84,94,92,116};
// '7'
static const uint8_t bitmap_55[] = {2,34,50,30,6,2};
// '8'
static const uint8_t bitmap_56[] = {32,124,94,84,92,124};
// '9'
static const uint8_t bitmap_57[] = {8,92,86,84,84,60};
// ':'
static const uint8_t bitmap_58[] = {88,88};

static const uint8_t char_width[] = {6,3,6,6,6,6,6,6,6,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t syncopate_bold_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
