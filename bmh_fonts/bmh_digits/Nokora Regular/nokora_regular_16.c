// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_regular_16

#include "font.h"
#include "nokora_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,48,16,16,48,224,128,31,127,192,128,128,192,127,63};
// '1'
static const uint8_t bitmap_49[] = {192,96,240,240,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {32,16,16,16,48,240,224,192,224,176,156,142,135,129};
// '3'
static const uint8_t bitmap_51[] = {32,16,16,16,16,240,224,192,128,130,130,199,125,57};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,32,240,0,0,24,20,18,17,16,16,255,16,16};
// '5'
static const uint8_t bitmap_53[] = {240,16,16,16,16,16,0,131,130,130,130,198,124,56};
// '6'
static const uint8_t bitmap_54[] = {128,192,96,48,16,16,16,0,63,127,194,129,129,129,67,60};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,16,16,208,240,48,0,0,128,224,124,31,7,0,0};
// '8'
static const uint8_t bitmap_56[] = {224,48,16,16,16,48,224,0,120,77,134,130,134,133,72,48};
// '9'
static const uint8_t bitmap_57[] = {192,32,16,16,16,48,224,192,3,134,132,132,196,98,63,31};
// ':'
static const uint8_t bitmap_58[] = {128,128,193,193};

static const uint8_t char_width[] = {8,4,7,7,9,7,8,9,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t nokora_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
