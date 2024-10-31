// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_light_italic_16

#include "font.h"
#include "roboto_light_italic_16.h"

// '0'
static const uint8_t bitmap_48[] = {128,96,16,8,8,8,48,192,63,64,64,64,96,48,15,0};
// '1'
static const uint8_t bitmap_49[] = {32,32,32,208,48,0,0,240,15,0};
// '2'
static const uint8_t bitmap_50[] = {0,64,48,24,8,8,8,240,64,96,80,72,68,66,65,64};
// '3'
static const uint8_t bitmap_51[] = {0,0,48,24,8,8,136,208,32,8,48,64,65,65,65,34,28,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,64,32,240,0,16,24,20,19,16,208,63,16,16};
// '5'
static const uint8_t bitmap_53[] = {0,128,112,16,16,16,16,16,96,195,129,129,129,67,62,0};
// '6'
static const uint8_t bitmap_54[] = {0,128,96,32,16,16,16,127,194,129,129,129,67,62};
// '7'
static const uint8_t bitmap_55[] = {0,16,16,16,16,16,208,48,128,192,32,24,6,1,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,240,24,8,8,8,152,96,8,54,66,65,65,65,35,28,0};
// '9'
static const uint8_t bitmap_57[] = {192,48,24,8,8,8,240,1,70,68,36,36,26,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,128,128,128,0};

static const uint8_t char_width[] = {8,5,8,9,9,8,7,8,9,7,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_light_italic_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
