// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font jsmath-cmmi10_32

#include "font.h"
#include "jsmath-cmmi10_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,128,128,192,192,192,192,192,128,128,0,0,0,248,254,255,255,1,0,0,0,0,0,1,255,255,254,248,3,15,31,63,48,96,96,96,96,96,48,63,31,15,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,128,128,192,0,0,0,0,3,3,3,3,3,255,255,255,0,0,0,0,0,48,48,48,48,63,63,63,48,48,48,48,0,0,0,0,0,0,0,0,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,192,96,96,96,96,96,224,224,192,192,128,0,0,3,7,7,0,0,128,128,192,96,113,63,63,31,14,16,24,28,30,30,31,29,29,28,28,28,28,28,31,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,128,128,192,192,192,192,192,128,128,0,0,0,0,12,31,31,31,8,0,0,128,193,255,255,127,30,0,0,192,192,192,128,3,3,3,3,7,31,252,252,248,224,1,7,15,27,27,24,48,48,24,24,31,15,15,7,1};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,128,192,192,0,0,0,0,0,0,128,192,96,56,28,7,255,255,255,0,0,0,48,60,54,51,49,48,48,48,48,255,255,255,48,48,48,0,0,0,0,0,0,24,24,24,31,31,31,24,24,24};
// '5'
static const uint8_t bitmap_53[] = {0,192,128,128,128,128,128,128,128,128,128,192,0,0,0,255,255,7,135,135,199,131,131,131,1,0,0,0,192,199,199,195,1,0,0,0,1,3,255,255,252,240,7,15,31,25,24,48,48,24,24,30,15,7,3,0};
// '6'
static const uint8_t bitmap_54[] = {0,240,252,254,63,131,193,64,64,192,198,143,15,15,0,14,255,255,255,15,1,0,0,0,0,1,255,255,254,248,0,1,7,15,31,56,48,48,48,48,24,31,15,7,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '7'
static const uint8_t bitmap_55[] = {0,192,192,128,128,128,128,128,128,128,128,128,128,128,128,28,31,3,3,3,3,3,131,195,227,59,31,15,3,1,0,0,0,0,192,248,254,255,3,0,0,0,0,0,0,0,0,0,0,31,31,31,15,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,48,252,254,227,193,129,128,1,1,131,231,254,124,0,0,224,240,59,11,15,15,15,31,63,63,125,248,240,192,1,15,31,56,48,96,96,96,96,112,112,56,31,15,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,128,192,192,192,192,192,128,128,0,0,0,240,252,255,255,3,0,0,0,0,1,3,255,255,252,224,0,7,143,159,24,48,48,48,48,24,14,255,255,255,31,0,7,15,31,31,48,48,24,24,28,15,7,3,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,60,62,60,28,0,0,0,0};

static const uint8_t char_width[] = {15,12,15,15,15,14,15,15,15,15,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t jsmath-cmmi10_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
