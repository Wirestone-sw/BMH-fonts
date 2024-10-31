// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_thin_16

#include "font.h"
#include "roboto_slab_thin_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,64,64,64,64,128,255,0,0,0,0,0,255};
// '1'
static const uint8_t bitmap_49[] = {64,64,192,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {128,64,64,64,64,128,0,1,128,64,32,16,12,3};
// '3'
static const uint8_t bitmap_51[] = {128,64,64,64,64,64,128,193,0,8,8,8,20,243};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,0,0,96,88,68,67,64,255,64,64};
// '5'
static const uint8_t bitmap_53[] = {192,64,64,64,64,64,192,159,4,4,4,4,8,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,64,64,64,64,0,255,8,4,4,4,4,248};
// '7'
static const uint8_t bitmap_55[] = {192,64,64,64,64,64,192,0,0,192,56,6,1,0};
// '8'
static const uint8_t bitmap_56[] = {128,64,64,64,64,64,128,247,20,8,8,8,8,247};
// '9'
static const uint8_t bitmap_57[] = {128,64,64,64,64,64,128,31,32,32,32,32,16,255};
// ':'
static const uint8_t bitmap_58[] = {0,1};

static const uint8_t char_width[] = {7,3,7,7,8,7,7,7,7,7,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_thin_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
