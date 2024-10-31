// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font arimo_bold_20

#include "font.h"
#include "arimo_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,192,224,96,96,224,192,192,0,255,255,255,0,0,0,0,255,255,255};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,224,224,224,224,0,0,0,0,3,1,1,0,255,255,255,0,0,0,0};
// '2'
static const uint8_t bitmap_50[] = {128,192,224,224,96,96,224,224,192,128,1,129,193,224,224,112,60,31,15,7};
// '3'
static const uint8_t bitmap_51[] = {128,192,224,224,96,96,224,224,192,128,1,1,1,24,24,56,60,255,231,195};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,224,224,224,224,0,0,128,224,248,188,143,135,129,255,255,255,128,128};
// '5'
static const uint8_t bitmap_53[] = {128,224,224,96,96,96,96,96,96,96,31,31,31,24,12,12,28,252,248,240};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,224,224,96,224,224,192,0,255,255,255,24,12,12,28,253,249,241};
// '7'
static const uint8_t bitmap_55[] = {96,96,96,96,96,96,96,224,224,224,0,0,0,192,240,252,62,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {128,192,224,224,96,96,224,224,192,128,231,255,255,60,24,24,60,255,255,231};
// '9'
static const uint8_t bitmap_57[] = {128,192,224,224,96,96,224,192,192,0,31,63,127,112,96,96,48,255,255,255};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,7,7,7};

static const uint8_t char_width[] = {10,11,10,10,12,10,10,10,10,10,3};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t arimo_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
