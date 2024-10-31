// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font just_another_hand_regular_32

#include "font.h"
#include "just_another_hand_regular_32.h"

// '0'
static const uint8_t bitmap_48[] = {253,255,31,1,0,0,7,255,255,128,63,255,254,0,0,0,128,255,255,31,0,3,15,30,24,28,31,15,3,0,0,0,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {255,255,255,0,0,255,255,128,0,15,15,15,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {7,7,0,0,192,255,255,31,0,128,240,254,63,15,1,0,12,15,15,13,12,12,14,14,0,0,0,0,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {1,1,128,224,240,252,255,143,0,0,0,0,1,1,0,0,1,255,255,254,3,15,31,28,24,24,30,15,7,0,0,0,0,0,0,0,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,192,248,255,31,255,255,0,0,0,28,31,31,24,24,255,255,248,24,24,0,0,0,0,0,7,15,15,0,0,0,0,0,0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {3,7,3,1,1,3,255,254,240,192,192,0,0,0,128,255,255,63,7,7,14,12,12,15,7,1,0,0,0,0,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {240,254,255,243,48,240,224,192,0,255,255,255,0,0,0,255,255,252,0,7,15,30,24,28,15,7,0,0,0,0,0,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,192,255,255,3,128,255,255,15,0,15,31,31,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {31,255,251,192,224,248,255,159,0,0,254,255,255,1,0,0,1,255,255,32,3,15,31,28,24,28,30,15,3,0,0,0,0,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {255,255,255,0,0,1,255,255,252,0,7,15,14,12,239,255,127,3,0,0,0,0,15,15,1,0,0,0,0,0,0,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {128,128,3,3,14,14,0,0};

static const uint8_t char_width[] = {10,4,8,10,10,9,9,5,10,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t just_another_hand_regular_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
