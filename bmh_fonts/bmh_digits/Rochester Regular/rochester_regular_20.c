// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font rochester_regular_20

#include "font.h"
#include "rochester_regular_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,64,64,64,64,128,0,0,240,255,3,0,0,0,0,0,255,252};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,128,192,2,2,1,1,255};
// '2'
static const uint8_t bitmap_50[] = {0,128,64,64,64,64,64,64,128,0,14,29,24,136,200,64,96,48,31,6};
// '3'
static const uint8_t bitmap_51[] = {0,0,128,64,64,64,64,192,128,0,0,3,7,40,32,48,104,199,195,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,0,0,0,128,192,224,16,12,7,1,240,8,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,192,192,192,192,192,192,64,64,0,12,11,8,16,16,48,32,224,192};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,128,128,64,0,0,0,224,248,206,35,32,16,32,32,192,128};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,128,128,128,64,1,0,0,224,24,4,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,128,64,64,64,64,64,128,0,0,0,128,71,44,24,56,56,104,231,192,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,128,64,64,64,64,128,0,30,63,64,64,128,64,64,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,128};

static const uint8_t char_width[] = {10,5,10,10,10,10,10,9,11,9,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t rochester_regular_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
