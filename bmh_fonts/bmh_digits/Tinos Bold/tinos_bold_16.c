// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font tinos_bold_16

#include "font.h"
#include "tinos_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,96,32,96,192,128,63,127,192,128,192,127,63};
// '1'
static const uint8_t bitmap_49[] = {128,192,224,224,0,0,128,255,255,255,128,128};
// '2'
static const uint8_t bitmap_50[] = {224,32,32,32,96,224,192,192,224,208,200,206,199,195};
// '3'
static const uint8_t bitmap_51[] = {224,32,32,32,224,224,192,224,128,132,132,207,251,121};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,192,224,224,0,48,56,54,51,48,255,255,48};
// '5'
static const uint8_t bitmap_53[] = {224,96,96,96,96,96,0,227,130,130,130,198,254,124};
// '6'
static const uint8_t bitmap_54[] = {128,192,96,32,32,32,224,63,127,194,130,130,254,124};
// '7'
static const uint8_t bitmap_55[] = {224,96,96,96,96,96,224,32,0,128,224,120,14,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {192,224,32,32,32,224,192,123,255,132,132,134,255,123};
// '9'
static const uint8_t bitmap_57[] = {0,192,224,32,32,96,192,192,1,231,143,136,136,200,127,63};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,66,231,231};

static const uint8_t char_width[] = {7,6,7,7,8,7,7,8,7,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t tinos_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
