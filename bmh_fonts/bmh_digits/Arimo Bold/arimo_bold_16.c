// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_16

#include "font.h"
#include "arimo_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,48,48,48,224,192,63,127,192,192,192,127,63};
// '1'
static const uint8_t bitmap_49[] = {192,96,48,240,240,0,0,0,192,192,192,255,255,192,192,192};
// '2'
static const uint8_t bitmap_50[] = {96,112,48,48,48,240,224,224,240,248,220,207,199,195};
// '3'
static const uint8_t bitmap_51[] = {0,96,112,48,48,48,240,224,32,96,224,198,198,199,255,121};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,224,240,240,0,0,48,60,55,51,48,255,255,48,48};
// '5'
static const uint8_t bitmap_53[] = {240,240,48,48,48,48,48,0,103,231,195,195,195,255,126,24};
// '6'
static const uint8_t bitmap_54[] = {192,224,48,48,48,112,96,63,127,194,195,195,255,126};
// '7'
static const uint8_t bitmap_55[] = {48,48,48,48,176,240,112,0,192,248,254,15,1,0};
// '8'
static const uint8_t bitmap_56[] = {224,240,48,48,48,240,224,125,255,198,198,198,255,125};
// '9'
static const uint8_t bitmap_57[] = {224,240,48,48,48,224,192,103,239,204,204,228,127,63};
// ':'
static const uint8_t bitmap_58[] = {128,128,193,193};

static const uint8_t char_width[] = {7,8,7,8,9,8,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
