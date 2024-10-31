// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_medium_20

#include "font.h"
#include "roboto_medium_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,96,96,96,224,192,128,0,252,255,255,0,0,0,0,0,255,255,252};
// '1'
static const uint8_t bitmap_49[] = {128,192,192,192,224,224,1,0,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,192,192,224,96,96,96,224,192,128,0,3,3,3,0,128,192,240,120,63,15,0};
// '3'
static const uint8_t bitmap_51[] = {0,192,192,224,96,96,96,224,192,128,1,1,1,48,48,48,48,125,255,207};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,192,224,224,224,0,0,192,240,248,158,143,131,255,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,96,96,96,96,96,96,0,30,31,31,12,12,12,28,248,248,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,192,192,224,96,96,96,0,0,64,254,255,27,12,12,12,28,248,248,224};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,96,224,224,96,0,0,0,0,192,240,252,63,7,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,128,192,224,96,96,96,224,192,128,0,0,207,255,120,48,48,48,120,255,207,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,224,96,96,96,224,192,128,15,63,63,112,96,96,96,49,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,4,14,14};

static const uint8_t char_width[] = {11,6,11,10,11,10,11,11,11,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_medium_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
