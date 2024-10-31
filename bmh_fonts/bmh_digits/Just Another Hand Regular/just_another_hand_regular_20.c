// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font just_another_hand_regular_20

#include "font.h"
#include "just_another_hand_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {252,254,3,15,254,192,63,255,128,192,255,15};
// '1'
static const uint8_t bitmap_49[] = {254,0,255,240};
// '2'
static const uint8_t bitmap_50[] = {28,6,2,254,124,192,248,159,199,192};
// '3'
static const uint8_t bitmap_51[] = {0,6,131,225,255,158,0,32,224,193,128,192,127,63};
// '4'
static const uint8_t bitmap_52[] = {240,63,255,0,0,7,4,255,252,6};
// '5'
static const uint8_t bitmap_53[] = {31,31,9,9,240,224,48,240,128,192,127,31};
// '6'
static const uint8_t bitmap_54[] = {224,254,103,96,192,0,31,127,192,192,127,31};
// '7'
static const uint8_t bitmap_55[] = {2,3,3,255,63,0,0,254,255,0};
// '8'
static const uint8_t bitmap_56[] = {124,255,195,255,188,0,126,255,0,128,255,28};
// '9'
static const uint8_t bitmap_57[] = {252,255,1,7,254,240,1,7,134,247,63,3};
// ':'
static const uint8_t bitmap_58[] = {0,195};

static const uint8_t char_width[] = {6,2,5,7,5,6,6,5,6,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t just_another_hand_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
