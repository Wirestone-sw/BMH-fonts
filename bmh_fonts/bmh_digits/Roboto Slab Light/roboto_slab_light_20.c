// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_light_20

#include "font.h"
#include "roboto_slab_light_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,240,252,2,1,1,1,1,2,14,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,2,2,3,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,28,6,3,1,1,1,3,198,124};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,12,6,3,129,129,129,129,66,60,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,48,12,6,255,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,192,255,193,65,65,65,193,129,3};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,224,252,70,35,33,33,33,65,194,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,7,1,1,1,1,193,113,25,7,3};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,24,126,66,129,129,129,129,66,126,24};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,248,14,2,1,1,1,3,6,252,240};
// ':'
static const uint8_t bitmap_58[] = {0,0,48,48};

static const uint8_t char_width[] = {10,4,9,10,11,9,10,10,10,10,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_light_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
