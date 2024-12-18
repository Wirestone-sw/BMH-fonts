// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmbx10_8

#include "font.h"
#include "jsmath-cmbx10_8.h"

// '0'
static const uint8_t bitmap_48[] = {124,68,68,120};
// '1'
static const uint8_t bitmap_49[] = {68,124,64};
// '2'
static const uint8_t bitmap_50[] = {108,100,84,108};
// '3'
static const uint8_t bitmap_51[] = {204,164,124};
// '4'
static const uint8_t bitmap_52[] = {24,52,62,48};
// '5'
static const uint8_t bitmap_53[] = {124,76,52};
// '6'
static const uint8_t bitmap_54[] = {120,84,84,124};
// '7'
static const uint8_t bitmap_55[] = {12,116,12,4};
// '8'
static const uint8_t bitmap_56[] = {32,92,84,124};
// '9'
static const uint8_t bitmap_57[] = {62,50,62,12};
// ':'
static const uint8_t bitmap_58[] = {72};

static const uint8_t char_width[] = {4,3,4,3,4,3,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmbx10_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
