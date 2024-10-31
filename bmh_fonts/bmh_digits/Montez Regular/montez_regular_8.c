// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font montez_regular_8

#include "font.h"
#include "montez_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {120,68,68,56};
// '1'
static const uint8_t bitmap_49[] = {72,124,64};
// '2'
static const uint8_t bitmap_50[] = {76,68,124};
// '3'
static const uint8_t bitmap_51[] = {76,100,124};
// '4'
static const uint8_t bitmap_52[] = {48,44,124};
// '5'
static const uint8_t bitmap_53[] = {108,76,116};
// '6'
static const uint8_t bitmap_54[] = {120,76,112};
// '7'
static const uint8_t bitmap_55[] = {60,4};
// '8'
static const uint8_t bitmap_56[] = {108,84,108};
// '9'
static const uint8_t bitmap_57[] = {28,100,124};
// ':'
static const uint8_t bitmap_58[] = {96};

static const uint8_t char_width[] = {4,3,3,3,3,3,3,2,3,3,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t montez_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
