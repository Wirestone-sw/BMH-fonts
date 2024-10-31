// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font luckiest_guy_regular_20

#include "font.h"
#include "luckiest_guy_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {192,248,252,254,255,31,15,15,31,255,254,252,248,192,1,15,31,63,127,124,120,120,124,63,63,31,15,1};
// '1'
static const uint8_t bitmap_49[] = {124,62,255,255,255,255,254,0,0,255,255,255,255,63};
// '2'
static const uint8_t bitmap_50[] = {1,31,15,15,15,207,255,255,255,254,120,60,60,60,126,127,127,127,127,125,124,12};
// '3'
static const uint8_t bitmap_51[] = {1,15,7,199,199,231,255,255,255,255,190,62,60,124,121,120,121,125,127,63,63,31};
// '4'
static const uint8_t bitmap_52[] = {0,252,252,252,252,4,255,255,255,255,255,7,7,7,7,7,135,255,255,255,255,15};
// '5'
static const uint8_t bitmap_53[] = {0,255,255,255,255,207,207,223,223,159,0,96,121,249,241,241,249,251,255,127,127,63};
// '6'
static const uint8_t bitmap_54[] = {128,240,252,254,254,159,223,207,207,159,158,0,7,63,127,255,255,243,241,243,255,255,127,63};
// '7'
static const uint8_t bitmap_55[] = {31,31,31,31,31,223,255,255,255,255,31,0,128,240,252,255,255,255,63,7,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,124,254,254,223,143,143,159,254,254,252,56,28,63,127,255,251,241,241,243,255,127,127,62};
// '9'
static const uint8_t bitmap_57[] = {112,252,254,254,222,143,143,255,254,254,252,224,0,113,249,243,243,243,251,253,127,63,31,3};
// ':'
static const uint8_t bitmap_58[] = {32,240,240,240,96,16,120,120,120,56};

static const uint8_t char_width[] = {14,7,11,11,11,11,12,11,12,12,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t luckiest_guy_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
