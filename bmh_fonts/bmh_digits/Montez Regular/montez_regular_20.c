// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font montez_regular_20

#include "font.h"
#include "montez_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,32,32,32,192,128,0,16,255,0,1,0,0,0,0,207,126};
// '1'
static const uint8_t bitmap_49[] = {0,128,224,224,0,0,2,1,255,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {128,64,32,32,32,96,192,128,3,14,0,0,0,128,113,15};
// '3'
static const uint8_t bitmap_51[] = {128,64,32,32,32,96,224,128,3,14,132,160,32,48,207,135};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,192,0,192,96,0,64,224,216,199,192,64,255,64,64};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,96,96,32,32,32,0,128,102,5,4,4,4,12,248,224};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,32,32,32,0,0,254,27,4,4,4,4,188,240};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,32,160,96,0,224,120,6,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,32,32,32,32,32,192,128,3,15,216,48,48,112,200,143,3};
// '9'
static const uint8_t bitmap_57[] = {0,192,96,32,32,32,96,192,0,6,31,48,32,64,32,144,255,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,192,192};

static const uint8_t char_width[] = {10,6,8,8,9,9,8,6,9,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t montez_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
