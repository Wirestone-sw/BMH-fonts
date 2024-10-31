// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_italic_16

#include "font.h"
#include "arimo_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,192,32,16,16,16,224,192,127,193,128,128,192,96,63,7};
// '1'
static const uint8_t bitmap_49[] = {0,0,64,32,32,240,112,0,128,128,128,128,254,143,128,128};
// '2'
static const uint8_t bitmap_50[] = {0,96,48,16,16,48,224,192,224,176,152,136,140,134,3,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,96,48,16,16,16,240,224,32,96,192,128,130,198,111,57,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,176,240,16,24,22,19,17,240,127,17};
// '5'
static const uint8_t bitmap_53[] = {0,0,224,112,16,16,16,16,16,32,98,195,129,129,193,99,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,96,48,16,16,112,96,63,231,131,129,193,99,62,0};
// '7'
static const uint8_t bitmap_55[] = {16,16,16,16,144,208,48,192,248,28,7,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,224,48,16,16,48,240,224,48,124,197,131,130,194,103,61,0};
// '9'
static const uint8_t bitmap_57[] = {128,224,48,16,16,48,224,192,99,199,140,136,72,116,31,3};
// ':'
static const uint8_t bitmap_58[] = {0,128,128,192,65,1};

static const uint8_t char_width[] = {8,8,8,9,8,9,8,7,9,8,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
