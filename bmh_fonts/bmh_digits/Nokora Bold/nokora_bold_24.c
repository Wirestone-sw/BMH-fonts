// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_bold_24

#include "font.h"
#include "nokora_bold_24.h"

// '0'
static const uint8_t bitmap_48[] = {240,252,254,254,15,15,7,15,126,254,252,240,0,127,255,255,255,128,0,0,128,240,255,255,255,6,0,1,3,7,7,7,7,7,7,3,1,0,0};
// '1'
static const uint8_t bitmap_49[] = {32,112,120,56,60,222,255,255,255,0,0,0,0,0,255,255,255,255,0,0,0,0,0,7,7,7,7};
// '2'
static const uint8_t bitmap_50[] = {4,28,30,14,15,15,15,15,254,254,252,248,0,0,128,192,224,248,124,62,31,15,7,3,0,0,7,7,7,7,7,7,7,7,7,7,7,7,7};
// '3'
static const uint8_t bitmap_51[] = {4,14,14,15,7,7,7,143,254,254,252,56,128,0,0,7,7,7,7,143,255,253,252,248,7,7,7,7,7,7,7,7,7,3,3,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,128,192,240,248,62,255,255,255,255,0,0,112,124,126,127,119,113,112,112,255,255,255,255,112,112,0,0,0,0,0,0,0,0,7,7,7,7,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,255,255,255,159,143,143,143,143,15,15,0,130,131,7,3,3,3,7,135,255,255,254,252,3,7,7,7,7,7,7,7,7,3,1,0};
// '6'
static const uint8_t bitmap_54[] = {192,240,248,124,30,142,142,143,135,135,7,0,0,127,255,255,254,135,3,3,3,199,255,255,254,48,0,1,3,7,7,7,7,7,7,7,3,1,0};
// '7'
static const uint8_t bitmap_55[] = {15,15,15,15,15,15,15,239,255,255,255,31,7,0,0,0,128,240,252,255,127,15,3,0,0,0,0,0,6,7,7,7,1,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {16,252,254,254,207,135,135,143,254,254,252,56,240,248,253,255,15,7,7,15,159,253,252,240,1,3,7,7,7,7,7,7,7,7,3,1};
// '9'
static const uint8_t bitmap_57[] = {248,252,254,254,15,7,15,15,254,254,252,240,3,7,15,15,14,14,14,142,231,255,255,63,0,7,7,7,7,7,7,7,3,1,0,0};
// ':'
static const uint8_t bitmap_58[] = {32,240,240,240,112,0,192,192,192,128,1,3,3,3,3};

static const uint8_t char_width[] = {13,9,13,12,14,12,13,13,12,12,5};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t nokora_bold_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
