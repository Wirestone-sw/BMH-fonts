// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font aclonica_regular_8

#include "font.h"
#include "aclonica_regular_8.h"

// '0'
static const uint8_t bitmap_48[] = {24,124,66,66,124,60};
// '1'
static const uint8_t bitmap_49[] = {66,126,126};
// '2'
static const uint8_t bitmap_50[] = {68,100,82,82,94,76};
// '3'
static const uint8_t bitmap_51[] = {32,102,74,74,124,32};
// '4'
static const uint8_t bitmap_52[] = {48,56,36,126,126};
// '5'
static const uint8_t bitmap_53[] = {48,110,74,74,114,32};
// '6'
static const uint8_t bitmap_54[] = {24,124,74,74,122,52};
// '7'
static const uint8_t bitmap_55[] = {2,98,122,30,6};
// '8'
static const uint8_t bitmap_56[] = {32,124,74,74,124,48};
// '9'
static const uint8_t bitmap_57[] = {76,124,82,82,124,60};
// ':'
static const uint8_t bitmap_58[] = {36};

static const uint8_t char_width[] = {6,3,6,6,5,6,6,5,6,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t aclonica_regular_8 = {
    8,
    char_values,
    char_addr,
    char_width
};
