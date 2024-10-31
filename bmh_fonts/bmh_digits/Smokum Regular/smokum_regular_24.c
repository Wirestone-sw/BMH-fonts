// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font smokum_regular_24

#include "font.h"
#include "smokum_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {248,120,124,124,124,120,248,255,128,0,128,128,128,255,7,15,15,15,15,15,15};
// '1'
static const uint8_t bitmap_49[] = {112,112,252,252,0,0,0,0,128,255,0,0,15,15,15,15,15,15};
// '2'
static const uint8_t bitmap_50[] = {252,120,120,124,124,120,248,225,16,16,8,8,132,199,15,15,15,15,15,15,15};
// '3'
static const uint8_t bitmap_51[] = {252,120,120,124,124,120,248,192,0,8,8,8,12,247,15,15,15,15,15,15,7};
// '4'
static const uint8_t bitmap_52[] = {0,124,252,124,252,124,12,0,28,22,17,16,255,16,16,124,0,0,0,15,15,15,15,0};
// '5'
static const uint8_t bitmap_53[] = {252,124,124,124,124,124,252,207,4,4,4,4,4,248,15,15,15,15,15,15,7};
// '6'
static const uint8_t bitmap_54[] = {248,120,124,124,120,116,248,255,4,4,4,4,12,249,7,15,15,15,15,15,7};
// '7'
static const uint8_t bitmap_55[] = {248,120,120,120,120,120,252,1,0,128,112,28,3,0,0,14,3,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {248,120,124,124,124,120,248,255,8,8,8,8,8,255,7,15,15,15,15,15,15};
// '9'
static const uint8_t bitmap_57[] = {248,120,60,60,60,120,240,207,8,8,8,8,136,255,15,15,15,15,15,15,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,6,15,15,14,4,6,15,15,15,6};

static const uint8_t char_width[] = {7,6,7,7,8,7,7,7,7,7,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t smokum_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
