// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_thin_32

#include "font.h"
#include "roboto_slab_thin_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,128,128,128,128,128,0,0,0,0,0,224,28,6,1,1,0,0,0,0,0,1,1,2,12,240,255,0,0,0,0,0,0,0,0,0,0,0,0,0,255,3,28,48,64,64,128,128,128,128,128,64,64,32,24,7};
// '1'
static const uint8_t bitmap_49[] = {128,128,128,64,64,64,192,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,0,0,0,0,0,255,0,0,0,0,0,0,64,64,64,64,64,127,64,64,64,64,64};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,128,128,128,128,128,128,0,0,0,0,0,48,12,2,1,1,0,0,0,0,0,1,1,2,252,0,0,0,0,0,0,0,0,0,128,192,32,16,8,6,1,0,0,0,192,224,144,136,132,130,129,128,128,128,128,128,128,128,248};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,128,128,128,128,128,128,0,0,0,0,0,0,28,2,1,1,0,0,0,0,0,0,1,1,134,124,0,0,0,0,0,0,0,4,4,4,4,4,10,11,17,96,128,7,24,32,64,64,128,128,128,128,128,128,64,64,32,28,3};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,128,0,0,0,0,0,0,0,0,0,0,128,64,48,8,6,1,255,0,0,0,0,0,192,96,24,12,3,1,0,0,0,0,0,255,0,0,0,0,1,1,1,1,1,1,1,1,1,129,129,129,255,129,129,129,1};
// '5'
static const uint8_t bitmap_53[] = {0,128,128,128,128,128,128,128,128,128,128,128,128,0,192,63,0,0,0,0,0,0,0,0,0,0,3,0,31,4,2,2,1,1,1,1,1,1,2,4,24,224,30,32,64,64,128,128,128,128,128,128,64,32,24,7};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,128,128,128,128,128,128,0,0,0,0,224,24,6,3,1,128,128,128,128,128,0,1,1,0,0,255,12,2,1,1,0,0,0,0,0,1,1,2,28,224,3,28,48,64,64,128,128,128,128,128,64,64,48,28,3};
// '7'
static const uint8_t bitmap_55[] = {128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,15,0,0,0,0,0,0,0,0,0,128,96,24,4,2,1,0,0,0,0,0,0,0,224,24,6,1,0,0,0,0,0,0,0,0,0,0,0,254,1,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,128,128,128,128,128,128,128,0,0,0,0,120,134,3,1,0,0,0,0,0,0,1,1,2,134,120,192,48,17,10,10,4,4,4,4,4,10,10,17,48,192,31,48,64,64,128,128,128,128,128,128,128,64,96,48,31};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,128,128,128,128,128,128,0,0,0,0,192,248,12,2,1,0,0,0,0,0,0,1,3,6,248,1,15,48,96,64,128,128,128,128,128,64,64,32,16,255,0,0,64,64,128,128,128,128,128,128,64,64,32,24,15};
// ':'
static const uint8_t bitmap_58[] = {0,96,0,96};

static const uint8_t char_width[] = {15,12,16,16,17,14,15,16,15,15,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_thin_32 = {
    32,
    char_values,
    char_addr,
    char_width
};
