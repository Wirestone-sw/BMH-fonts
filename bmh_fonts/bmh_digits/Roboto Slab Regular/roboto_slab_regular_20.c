// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_regular_20

#include "font.h"
#include "roboto_slab_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,240,252,30,3,3,3,3,7,254,252};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,6,6,6,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,28,30,7,3,3,3,131,238,254,56};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,12,14,7,131,131,131,131,254,124,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,120,28,15,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,192,255,223,67,99,99,195,195,135,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,224,248,190,70,67,99,99,195,195,128};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,7,7,3,3,3,195,243,59,15,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,24,126,254,131,131,131,131,238,126,56};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,248,254,6,3,3,3,3,6,254,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,96,96};

static const uint8_t char_width[] = {10,5,10,10,11,10,10,10,10,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
