// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font nokora_bold_20

#include "font.h"
#include "nokora_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,192,224,224,224,224,192,192,0,255,255,255,1,0,0,1,255,255,255};
// '1'
static const uint8_t bitmap_49[] = {0,0,128,128,192,224,224,224,2,7,7,3,253,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,192,192,224,224,224,224,192,192,128,0,1,1,128,192,224,249,127,31,15};
// '3'
static const uint8_t bitmap_51[] = {192,192,224,224,224,224,224,192,192,128,0,1,48,48,48,56,125,239,239,195};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,224,224,224,0,0,128,224,240,188,158,135,129,255,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,224,224,224,224,224,224,0,28,63,63,63,56,56,120,248,240,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,224,224,224,224,0,252,255,255,49,56,24,56,248,248,240};
// '7'
static const uint8_t bitmap_55[] = {224,224,224,224,224,224,224,224,224,224,0,0,0,0,224,248,254,63,15,3};
// '8'
static const uint8_t bitmap_56[] = {0,192,192,224,224,224,224,192,192,128,131,207,255,124,56,120,124,239,207,135};
// '9'
static const uint8_t bitmap_57[] = {128,192,192,224,224,224,224,192,128,0,63,127,127,240,224,96,113,255,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,6,7,7,7};

static const uint8_t char_width[] = {10,8,10,10,12,10,10,10,10,10,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t nokora_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
