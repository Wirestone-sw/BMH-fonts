// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_extrabold_20

#include "font.h"
#include "open_sans_extrabold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,248,252,254,255,15,7,15,255,254,252,248};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,16,56,124,60,30,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,6,14,15,7,7,135,239,255,254,254,60};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,2,14,207,199,199,199,239,255,126,62,8};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,240,252,62,255,255,255,255,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,224,255,255,255,231,231,231,231,199,199,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,240,248,252,254,206,231,231,231,231,199,128};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,7,7,7,7,7,199,247,255,255,127,15};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,28,126,254,255,231,199,231,255,127,126,28};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,252,254,255,255,135,135,143,255,254,252,248};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,112,240,240,240};

static const uint8_t char_width[] = {11,9,11,11,13,11,11,11,11,11,4};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_extrabold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
