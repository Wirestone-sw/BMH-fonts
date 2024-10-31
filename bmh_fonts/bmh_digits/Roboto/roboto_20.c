// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_20

#include "font.h"
#include "roboto_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,96,96,96,96,224,192,0,254,255,1,0,0,0,0,0,255,255};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,192,224,224,1,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,192,192,96,96,96,96,224,192,128,0,3,3,0,0,128,192,112,56,31,7,0};
// '3'
static const uint8_t bitmap_51[] = {0,192,192,96,96,96,96,192,192,0,1,1,0,48,48,48,48,120,207,135};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,224,224,224,0,0,128,224,112,28,15,3,0,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,96,96,96,96,96,96,12,31,9,12,12,12,28,248,240};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,96,96,96,0,0,240,254,63,25,12,12,12,28,248,240};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,96,224,224,0,0,0,0,128,224,120,30,7,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,96,96,96,96,224,192,0,128,207,127,48,48,48,48,120,207,135};
// '9'
static const uint8_t bitmap_57[] = {0,192,192,96,96,96,224,192,128,0,31,127,224,192,192,192,64,97,255,254};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,4,6,6};

static const uint8_t char_width[] = {10,6,11,10,11,9,10,10,10,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
