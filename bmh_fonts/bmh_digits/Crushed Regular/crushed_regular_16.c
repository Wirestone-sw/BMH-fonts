// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font crushed_regular_16

#include "font.h"
#include "crushed_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,32,16,32,224,128,127,192,128,128,127,31};
// '1'
static const uint8_t bitmap_49[] = {32,224,240,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {32,32,16,32,224,0,128,224,176,152,135,128};
// '3'
static const uint8_t bitmap_51[] = {32,32,16,48,224,128,192,128,130,134,253,48};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,96,240,240,0,8,14,9,8,127,127,8};
// '5'
static const uint8_t bitmap_53[] = {0,240,16,16,16,0,96,65,65,65,99,62};
// '6'
static const uint8_t bitmap_54[] = {192,96,48,16,32,0,127,194,130,130,124,16};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,208,112,16,0,96,126,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,32,16,32,224,0,16,253,134,130,134,253,16};
// '9'
static const uint8_t bitmap_57[] = {128,224,32,16,32,192,1,135,140,136,200,63};
// ':'
static const uint8_t bitmap_58[] = {0,198};

static const uint8_t char_width[] = {6,3,6,6,7,6,6,6,7,6,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t crushed_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
