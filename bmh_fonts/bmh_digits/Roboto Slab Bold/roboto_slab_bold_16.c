// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_bold_16

#include "font.h"
#include "roboto_slab_bold_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,192,192,192,128,0,255,255,129,0,0,195,255,255};
// '1'
static const uint8_t bitmap_49[] = {96,96,224,224,0,0,128,128,255,255,128,128};
// '2'
static const uint8_t bitmap_50[] = {0,128,192,192,192,192,192,128,0,2,3,195,224,112,56,31,143,130};
// '3'
static const uint8_t bitmap_51[] = {0,128,192,192,192,192,192,128,0,64,129,129,24,24,24,255,247,227};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,192,192,0,64,112,124,110,99,255,255,255,96};
// '5'
static const uint8_t bitmap_53[] = {192,192,192,192,192,192,192,0,159,159,12,12,12,252,249,96};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,192,192,192,192,0,255,255,137,12,12,156,252,248};
// '7'
static const uint8_t bitmap_55[] = {192,192,192,192,192,192,192,192,192,1,1,0,192,248,126,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {128,192,192,192,192,192,128,0,231,255,28,24,24,255,247,226};
// '9'
static const uint8_t bitmap_57[] = {128,128,192,192,192,192,128,0,31,63,48,48,48,255,255,126};
// ':'
static const uint8_t bitmap_58[] = {0,0,6,6};

static const uint8_t char_width[] = {8,6,9,9,9,8,8,9,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_bold_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
