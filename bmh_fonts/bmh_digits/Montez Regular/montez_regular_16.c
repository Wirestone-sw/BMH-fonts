// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font montez_regular_16

#include "font.h"
#include "montez_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,224,112,16,16,32,224,0,15,56,64,64,64,64,57,7};
// '1'
static const uint8_t bitmap_49[] = {128,224,112,0,64,127,64,64};
// '2'
static const uint8_t bitmap_50[] = {224,16,16,16,48,224,1,65,96,80,72,71};
// '3'
static const uint8_t bitmap_51[] = {224,16,16,16,48,224,1,113,76,68,74,49};
// '4'
static const uint8_t bitmap_52[] = {0,0,192,192,128,224,0,16,24,23,16,63,209,16};
// '5'
static const uint8_t bitmap_53[] = {0,128,96,32,32,32,0,112,131,130,130,130,204,56};
// '6'
static const uint8_t bitmap_54[] = {0,128,96,16,16,0,0,14,63,65,65,65,99,30};
// '7'
static const uint8_t bitmap_55[] = {32,32,32,192,32,224,60,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,32,16,16,16,48,192,1,51,78,68,76,51,0};
// '9'
static const uint8_t bitmap_57[] = {0,192,32,32,32,192,128,3,15,136,144,72,62,15};
// ':'
static const uint8_t bitmap_58[] = {0,152};

static const uint8_t char_width[] = {8,4,6,6,7,7,7,5,7,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t montez_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
