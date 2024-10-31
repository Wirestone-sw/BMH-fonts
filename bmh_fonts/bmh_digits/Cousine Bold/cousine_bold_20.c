// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font cousine_bold_20

#include "font.h"
#include "cousine_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,192,224,224,96,224,224,192,128,0,126,255,255,129,28,28,28,129,255,255,126};
// '1'
static const uint8_t bitmap_49[] = {128,128,128,192,224,224,224,224,0,0,0,1,1,1,1,0,255,255,255,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,192,192,224,224,96,224,224,192,192,0,1,129,193,225,240,120,56,31,15,7,0};
// '3'
static const uint8_t bitmap_51[] = {128,192,192,224,96,96,224,224,192,192,0,128,128,192,0,12,12,28,31,255,243,225};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,224,224,224,0,0,224,248,252,206,199,193,254,255,255,192,192};
// '5'
static const uint8_t bitmap_53[] = {0,224,224,224,96,96,96,96,96,96,0,128,159,159,31,28,12,28,28,252,248,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,224,224,96,224,224,192,128,0,60,255,255,251,12,12,12,29,253,249,224};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,96,224,224,96,0,0,0,192,240,252,62,15,3,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,192,224,96,96,96,224,192,192,0,192,231,255,63,24,24,24,63,255,231,192};
// '9'
static const uint8_t bitmap_57[] = {0,192,192,224,224,96,224,224,192,128,0,7,159,191,56,48,48,56,221,255,255,62};
// ':'
static const uint8_t bitmap_58[] = {128,128,128,3,3,3};

static const uint8_t char_width[] = {11,11,11,11,11,11,11,11,11,11,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t cousine_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
