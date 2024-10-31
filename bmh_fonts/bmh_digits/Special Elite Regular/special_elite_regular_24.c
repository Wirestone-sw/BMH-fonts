// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font special_elite_regular_24

#include "font.h"
#include "special_elite_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {56,255,0,0,0,0,0,0,0,0,0,224,255,44,0,1,7,14,12,28,28,28,28,12,14,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,255,127,0,0,0,0,0,0,24,24,24,24,24,28,31,31,24,24,24,24,24,24,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,131,195,227,96,48,48,24,24,14,7,3,0,14,31,63,6,6,6,12,12,24,24,24,12,14,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {192,192,192,6,3,3,3,7,6,14,252,240,3,7,13,12,28,28,12,12,14,15,7,3,0,0,0,0,0,0,0,0,0,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {32,120,124,110,99,97,96,96,96,248,255,96,96,96,96,0,0,0,0,0,0,12,12,12,15,15,6,12,12,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {128,143,159,142,6,6,6,6,6,28,248,240,3,7,15,29,24,24,24,24,12,14,3,1,0,0,0,0,0,0,0,0,0,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {60,255,220,12,6,2,2,2,6,6,156,252,240,0,2,3,7,14,12,12,12,12,6,7,3,1,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {192,240,248,14,3,31,7,1,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,241,127,30,12,12,12,12,12,14,30,247,224,0,7,15,14,28,24,24,24,24,12,14,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {1,135,140,156,24,48,48,16,24,24,223,255,63,0,7,15,31,28,28,28,12,14,7,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,143,143,159,143,142,0,6,15,31,31,27,23,6,0,0,0,0,0,0,0};

static const uint8_t char_width[] = {14,14,13,12,15,12,13,5,13,13,7};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t special_elite_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};