// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font smokum_regular_8

#include "font.h"
#include "smokum_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {124,68,124};
// '1'
static const uint8_t bitmap_49[] = {68,120};
// '2'
static const uint8_t bitmap_50[] = {100,124};
// '3'
static const uint8_t bitmap_51[] = {100,124};
// '4'
static const uint8_t bitmap_52[] = {124,80};
// '5'
static const uint8_t bitmap_53[] = {124,116};
// '6'
static const uint8_t bitmap_54[] = {124,124};
// '7'
static const uint8_t bitmap_55[] = {76,60};
// '8'
static const uint8_t bitmap_56[] = {124,84,124};
// '9'
static const uint8_t bitmap_57[] = {124,124};
// ':'
static const uint8_t bitmap_58[] = {160,176};

static const uint8_t char_width[] = {3,2,2,2,2,2,2,2,3,2,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t smokum_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
