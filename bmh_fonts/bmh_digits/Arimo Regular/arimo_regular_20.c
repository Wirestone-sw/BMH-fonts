// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_regular_20

#include "font.h"
#include "arimo_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,192,96,96,96,96,192,192,0,255,255,0,0,0,0,0,0,255,255};
// '1'
static const uint8_t bitmap_49[] = {128,192,64,224,224,0,0,0,0,1,0,0,255,255,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,192,192,96,96,96,96,224,192,0,1,1,128,192,192,96,48,28,15,3};
// '3'
static const uint8_t bitmap_51[] = {128,192,224,96,96,96,96,224,192,0,1,1,0,48,48,48,48,108,239,195};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,224,224,0,0,128,192,240,152,142,131,129,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,96,96,96,96,96,96,0,28,31,8,12,12,12,12,28,248,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,96,96,96,96,224,192,0,254,255,25,12,12,12,12,28,248,240};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,224,96,0,0,0,0,224,120,30,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {128,192,224,96,32,32,96,224,192,128,227,247,28,24,8,8,24,28,247,227};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,96,96,96,96,192,128,0,31,63,112,96,96,96,32,48,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,3,3};

static const uint8_t char_width[] = {10,9,10,10,11,10,10,10,10,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
