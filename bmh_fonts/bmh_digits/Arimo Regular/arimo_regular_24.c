// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_regular_24

#include "font.h"
#include "arimo_regular_24.h"

// '0'
static const uint8_t bitmap_48[] = {240,252,62,7,3,3,3,3,7,62,252,224,31,255,240,128,0,0,0,0,128,240,255,31,0,0,1,1,3,3,3,3,1,1,0,0};
// '1'
static const uint8_t bitmap_49[] = {24,12,6,6,255,255,255,0,0,0,0,0,0,0,0,255,255,255,0,0,0,0,3,3,3,3,3,3,3,3,3,3,3};
// '2'
static const uint8_t bitmap_50[] = {16,28,30,7,3,3,3,3,135,254,252,0,0,192,224,112,56,28,14,7,3,1,0,0,3,3,3,3,3,3,3,3,3,3,3,3};
// '3'
static const uint8_t bitmap_51[] = {24,28,30,7,3,3,3,3,135,254,124,0,96,224,192,128,3,3,3,3,135,254,252,120,0,1,1,3,3,3,3,3,3,1,1,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,224,56,30,7,255,255,0,0,56,62,55,49,48,48,48,48,255,255,48,48,0,0,0,0,0,0,0,0,3,3,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,255,255,131,195,195,195,195,195,131,3,0,64,193,193,129,0,0,0,0,129,231,255,62,0,1,1,3,3,3,3,3,3,1,0,0};
// '6'
static const uint8_t bitmap_54[] = {192,248,252,142,195,195,195,195,199,142,12,0,15,127,255,193,0,0,0,0,129,247,255,62,0,0,1,1,3,3,3,3,3,1,0,0};
// '7'
static const uint8_t bitmap_55[] = {3,3,3,3,3,3,131,227,115,63,15,3,0,0,0,0,240,254,31,3,0,0,0,0,0,0,0,2,3,3,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {16,252,254,135,3,3,3,3,135,254,252,0,120,252,206,3,3,3,3,3,3,238,252,120,0,1,1,3,3,3,3,3,3,1,1,0};
// '9'
static const uint8_t bitmap_57[] = {240,252,254,7,3,3,3,3,6,254,252,224,0,195,199,142,12,12,12,12,198,255,127,15,0,0,1,3,3,3,3,3,1,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {112,112,112,128,128,128,3,3,3};

static const uint8_t char_width[] = {12,11,12,12,12,12,12,12,12,12,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_regular_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
