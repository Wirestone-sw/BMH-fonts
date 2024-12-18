// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font just_another_hand_regular_48

#include "font.h"
#include "just_another_hand_regular_48.h"

// '0'
static const uint8_t bitmap_48[] = {248,255,255,255,1,0,0,0,0,31,255,255,255,192,255,255,255,255,0,0,0,0,0,0,255,255,255,255,7,255,255,255,240,0,0,0,0,224,255,255,255,15,0,0,7,15,31,62,56,56,62,31,15,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {255,255,255,255,0,255,255,255,255,0,1,255,255,255,240,0,15,31,31,31,0,0,0,0,0,0,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {15,15,15,1,0,0,0,0,192,255,255,255,63,0,0,0,0,0,0,224,252,255,255,31,3,0,0,0,0,224,248,255,255,63,7,0,0,0,0,0,12,31,63,31,31,28,28,28,30,30,30,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,1,1,0,128,192,224,248,254,255,31,7,0,0,0,0,0,0,2,7,15,7,3,3,7,15,255,254,252,224,192,192,192,128,0,0,0,0,0,0,192,255,255,255,63,3,15,31,31,62,60,56,56,60,30,31,15,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,224,252,255,255,255,255,255,255,0,0,0,0,0,254,255,255,143,128,131,255,255,255,192,128,192,192,128,3,3,3,3,3,3,255,255,255,255,3,3,3,1,0,0,0,0,0,0,1,31,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,15,31,31,31,31,7,7,7,15,62,254,252,240,0,0,0,0,0,0,0,0,0,0,0,0,255,255,255,255,64,224,224,224,192,0,0,0,0,0,240,255,255,255,15,0,3,15,31,31,62,56,56,60,63,31,15,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {192,252,255,255,223,225,224,224,224,192,128,0,0,255,255,255,255,31,3,0,1,31,255,255,254,240,31,255,255,255,224,0,0,0,0,255,255,255,255,0,1,7,15,31,62,56,60,63,31,15,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,248,255,255,255,0,0,252,255,255,255,1,0,248,255,255,255,7,0,8,31,63,63,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {63,255,255,255,128,128,128,240,255,255,127,15,0,0,192,248,255,255,63,15,7,3,7,31,254,252,248,128,255,255,255,255,0,0,0,0,0,128,255,255,255,31,0,7,15,31,63,56,56,56,62,31,31,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {255,255,255,255,0,0,0,0,3,255,255,255,252,7,127,255,255,248,192,128,224,252,255,255,255,255,0,0,0,1,3,3,3,195,253,255,255,31,0,0,0,0,0,0,16,62,63,31,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,60,60,60,0,0,0,60,60,60,0,0,0,0,0,0};

static const uint8_t char_width[] = {14,5,13,15,14,15,13,7,14,13,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t just_another_hand_regular_48 = {
    48,
    char_values,
    char_addr,
    char_width
};
