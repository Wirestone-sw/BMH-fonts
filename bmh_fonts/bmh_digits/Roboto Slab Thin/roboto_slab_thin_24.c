// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_thin_24

#include "font.h"
#include "roboto_slab_thin_24.h"

// '0'
static const uint8_t bitmap_48[] = {192,48,16,8,8,8,8,8,16,96,128,255,0,0,0,0,0,0,0,0,0,255,7,24,16,32,32,32,32,32,16,12,3};
// '1'
static const uint8_t bitmap_49[] = {16,16,16,8,248,0,0,0,0,0,0,0,0,255,0,0,0,0,32,32,32,32,63,32,32,32,32};
// '2'
static const uint8_t bitmap_50[] = {192,48,16,8,8,8,8,8,16,96,128,1,0,0,0,0,128,64,32,24,6,1,32,48,40,36,35,32,32,32,32,32,60};
// '3'
static const uint8_t bitmap_51[] = {192,32,16,8,8,8,8,8,16,48,192,0,0,0,0,16,16,16,16,40,36,195,6,8,16,32,32,32,32,32,32,16,15};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,192,32,24,224,0,0,0,128,64,48,8,6,1,0,0,0,255,0,0,0,1,1,1,1,1,1,1,33,33,63,33,33,1};
// '5'
static const uint8_t bitmap_53[] = {0,248,8,8,8,8,8,8,8,56,0,56,7,8,4,4,4,4,4,8,16,224,6,24,16,32,32,32,32,32,16,8,7};
// '6'
static const uint8_t bitmap_54[] = {192,32,16,8,8,8,8,8,16,0,0,255,8,4,2,2,2,2,4,4,56,192,7,24,16,32,32,32,32,16,16,14,1};
// '7'
static const uint8_t bitmap_55[] = {120,8,8,8,8,8,8,8,136,72,56,8,0,0,0,0,0,224,24,6,1,0,0,0,0,0,0,0,63,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,224,16,8,8,8,8,8,8,16,96,128,128,71,40,40,16,16,16,16,40,40,70,129,7,8,16,32,32,32,32,32,32,16,24,7};
// '9'
static const uint8_t bitmap_57[] = {128,96,16,8,8,8,8,8,16,32,192,15,48,64,0,128,128,128,128,64,32,255,0,16,32,32,32,32,32,32,16,8,7};
// ':'
static const uint8_t bitmap_58[] = {0,0,3,3,48,48};

static const uint8_t char_width[] = {11,9,11,11,13,11,11,12,12,11,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_thin_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
