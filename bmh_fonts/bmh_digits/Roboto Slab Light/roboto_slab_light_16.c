// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_light_16

#include "font.h"
#include "roboto_slab_light_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,64,64,64,64,128,0,255,0,0,0,0,0,195,60};
// '1'
static const uint8_t bitmap_49[] = {32,32,224,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {128,64,64,64,64,128,0,3,128,192,32,16,8,135};
// '3'
static const uint8_t bitmap_51[] = {128,64,64,64,64,192,128,193,0,8,8,8,20,243};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,0,0,96,88,68,67,64,255,64,64};
// '5'
static const uint8_t bitmap_53[] = {128,64,64,64,64,64,192,143,4,4,4,4,8,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,64,64,64,0,255,8,4,4,4,4,248};
// '7'
static const uint8_t bitmap_55[] = {192,64,64,64,64,64,192,64,1,0,128,112,12,3,0,0};
// '8'
static const uint8_t bitmap_56[] = {128,128,64,64,64,64,128,0,227,20,8,8,8,20,183,64};
// '9'
static const uint8_t bitmap_57[] = {128,128,64,64,64,128,0,31,16,32,32,32,16,255};
// ':'
static const uint8_t bitmap_58[] = {0,2};

static const uint8_t char_width[] = {8,3,7,7,8,7,7,8,8,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_light_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
