// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_regular_16

#include "font.h"
#include "roboto_slab_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,64,64,192,128,0,255,255,0,0,0,0,255,126};
// '1'
static const uint8_t bitmap_49[] = {128,128,192,192,0,0,255,255};
// '2'
static const uint8_t bitmap_50[] = {128,192,64,64,64,192,128,0,3,128,192,96,48,29,135,128};
// '3'
static const uint8_t bitmap_51[] = {128,192,64,64,64,192,128,129,0,8,8,8,183,247};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,0,96,120,76,71,65,255,255,64};
// '5'
static const uint8_t bitmap_53[] = {128,192,64,64,64,64,192,143,15,4,4,12,252,248};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,64,64,64,192,0,254,255,12,4,4,12,248,240};
// '7'
static const uint8_t bitmap_55[] = {192,64,64,64,64,64,192,192,1,0,192,240,28,3,1,0};
// '8'
static const uint8_t bitmap_56[] = {128,128,192,64,64,192,128,0,227,183,24,8,8,28,247,192};
// '9'
static const uint8_t bitmap_57[] = {0,128,192,64,64,192,128,0,31,57,32,32,32,144,255,28};
// ':'
static const uint8_t bitmap_58[] = {0,0,2,2};

static const uint8_t char_width[] = {8,4,8,7,8,7,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
