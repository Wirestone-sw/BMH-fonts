// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_italic_12

#include "font.h"
#include "arimo_italic_12.h"

// '0'
static const uint8_t bitmap_48[] = {240,8,4,4,12,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,24,200,124,0};
// '2'
static const uint8_t bitmap_50[] = {8,12,4,132,108,56};
// '3'
static const uint8_t bitmap_51[] = {0,8,12,68,68,172,24};
// '4'
static const uint8_t bitmap_52[] = {0,128,192,32,24,252,4};
// '5'
static const uint8_t bitmap_53[] = {0,224,92,68,68,196,4};
// '6'
static const uint8_t bitmap_54[] = {224,88,68,68,196,8};
// '7'
static const uint8_t bitmap_55[] = {4,4,132,100,20,12};
// '8'
static const uint8_t bitmap_56[] = {0,144,124,68,68,188,56};
// '9'
static const uint8_t bitmap_57[] = {240,8,4,4,204,240};
// ':'
static const uint8_t bitmap_58[] = {0,32};

static const uint8_t char_width[] = {6,6,6,7,7,7,6,6,7,6,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_italic_12 = {
    12,
    char_values,
    char_addr,
    char_width
};
