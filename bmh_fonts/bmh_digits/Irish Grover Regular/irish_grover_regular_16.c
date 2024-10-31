// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font irish_grover_regular_16

#include "font.h"
#include "irish_grover_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,224,48,16,16,112,224,192,15,63,127,192,192,192,240,127,63};
// '1'
static const uint8_t bitmap_49[] = {64,192,192,224,0,0,248,255,255,128};
// '2'
static const uint8_t bitmap_50[] = {240,96,48,48,48,240,240,224,99,112,120,124,110,103,103,113};
// '3'
static const uint8_t bitmap_51[] = {240,48,16,16,48,240,224,0,240,102,70,70,199,125,124,24};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,240,48,240,240,0,0,4,7,7,132,252,255,247,134,15};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,32,32,96,224,224,96,231,239,172,38,130,252,125};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,224,96,112,112,128,0,28,127,251,204,6,134,254,252,16};
// '7'
static const uint8_t bitmap_55[] = {224,96,96,32,32,224,224,96,1,128,224,252,63,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,224,48,16,16,16,240,224,48,249,223,134,134,134,255,253,48};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,96,96,64,192,128,7,143,159,152,216,236,127,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,204,204};

static const uint8_t char_width[] = {9,5,8,8,9,8,9,8,9,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t irish_grover_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
