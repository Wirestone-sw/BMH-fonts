// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font just_another_hand_regular_16

#include "font.h"
#include "just_another_hand_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {254,3,3,254,3,14,8,7};
// '1'
static const uint8_t bitmap_49[] = {255,15};
// '2'
static const uint8_t bitmap_50[] = {6,226,60,15,9,8};
// '3'
static const uint8_t bitmap_51[] = {97,49,111,192,8,8,14,3};
// '4'
static const uint8_t bitmap_52[] = {159,255,128,128,0,15,0,0};
// '5'
static const uint8_t bitmap_53[] = {15,5,13,248,7,4,7,1};
// '6'
static const uint8_t bitmap_54[] = {248,127,16,224,3,14,8,7};
// '7'
static const uint8_t bitmap_55[] = {2,1,249,31,0,0,15,0};
// '8'
static const uint8_t bitmap_56[] = {222,97,63,236,7,12,8,7};
// '9'
static const uint8_t bitmap_57[] = {126,195,195,254,0,0,12,3};
// ':'
static const uint8_t bitmap_58[] = {64,8};

static const uint8_t char_width[] = {4,1,3,4,4,4,4,4,4,4,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t just_another_hand_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
