// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_slab_bold_20

#include "font.h"
#include "roboto_slab_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,248,252,254,15,7,3,7,255,254,252,224};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,6,6,254,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,28,30,31,7,3,7,199,254,254,124};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,12,14,15,135,131,131,199,255,126,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,192,240,60,30,255,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,240,255,255,195,195,195,195,195,143,15};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,240,252,254,206,231,103,227,231,199,192,0};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,15,15,3,3,131,227,243,123,31,15,7};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,60,126,255,199,199,131,199,255,126,60};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,252,254,254,7,3,7,7,254,254,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,48,48,48};

static const uint8_t char_width[] = {11,5,10,10,12,10,11,11,10,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_slab_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
