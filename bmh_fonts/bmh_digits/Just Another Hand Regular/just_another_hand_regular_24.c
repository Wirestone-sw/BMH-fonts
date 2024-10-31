// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font just_another_hand_regular_24

#include "font.h"
#include "just_another_hand_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {255,255,0,0,0,255,255,3,31,60,48,60,31,3,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {255,248,31,31,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,224,252,63,3,24,31,31,25,24,24,0,0,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,12,14,7,13,252,240,14,30,24,24,28,15,3,0,0,0,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {96,124,95,65,255,255,96,96,0,0,0,0,15,31,0,0,0,0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,255,255,15,30,24,24,30,15,1,0,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {255,255,14,6,14,252,240,3,15,28,24,24,15,7,0,0,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,254,255,28,31,3,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {227,255,28,14,31,249,224,15,31,48,48,56,31,7,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {31,63,112,96,112,255,127,0,0,0,24,31,7,0,0,0,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {48,48,24,24,0,0};

static const uint8_t char_width[] = {7,2,6,7,8,7,7,3,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t just_another_hand_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
