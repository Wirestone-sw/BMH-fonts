// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_extrabold_32

#include "font.h"
#include "open_sans_extrabold_32.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,248,252,254,254,255,127,31,31,31,127,255,254,254,252,248,224,0,254,255,255,255,255,255,255,0,0,0,0,0,255,255,255,255,255,255,254,0,15,63,127,255,255,255,252,240,240,240,252,255,255,255,127,63,15,0};
// '1'
static const uint8_t bitmap_49[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,224,224,240,248,252,254,126,255,255,255,255,255,255,0,1,3,7,3,1,1,255,255,255,255,255,255,255,0,0,0,0,0,0,0,255,255,255,255,255,255,255};
// '2'
static const uint8_t bitmap_50[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,16,56,124,254,254,126,127,63,63,63,63,255,255,254,254,252,248,240,0,0,0,0,1,0,128,192,224,240,248,252,255,255,127,63,31,15,3,0,240,248,252,254,255,255,255,255,255,251,249,249,248,248,248,248,248,248,248};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,12,62,62,62,31,31,31,31,31,63,255,255,254,254,254,252,240,0,0,0,0,0,124,124,124,124,124,126,254,255,255,255,231,231,195,128,0,252,248,248,240,240,240,240,240,240,240,248,255,255,255,255,127,127,31,6};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,240,252,254,255,255,255,255,255,255,0,0,0,192,240,248,252,255,255,191,143,135,129,255,255,255,255,255,255,128,128,128,15,15,15,15,15,15,15,15,15,15,255,255,255,255,255,255,15,15,15};
// '5'
static const uint8_t bitmap_53[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,255,255,255,255,255,255,63,63,63,63,63,63,63,63,63,0,31,31,63,31,31,31,31,31,31,63,255,255,254,254,252,248,240,248,248,248,240,240,240,240,240,240,248,254,255,255,255,127,63,15};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,128,224,240,248,252,254,126,62,63,31,31,31,31,31,31,31,0,0,252,255,255,255,255,255,249,62,30,31,31,63,255,255,255,254,252,248,224,3,15,63,127,255,255,255,248,240,240,240,248,255,255,255,127,127,31,7};
// '7'
static const uint8_t bitmap_55[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,63,63,63,63,63,63,63,63,63,63,63,255,255,255,255,255,255,127,31,0,0,0,0,0,0,0,128,224,252,255,255,255,255,63,15,3,0,0,0,0,0,128,224,248,254,255,255,255,127,31,7,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,248,252,254,254,254,255,191,31,31,31,63,255,255,254,254,252,248,0,0,193,227,231,255,255,255,255,127,126,255,255,255,255,255,231,195,129,0,15,63,127,255,255,255,249,240,240,240,240,240,249,255,255,255,127,63,15};
// '9'
static const uint8_t bitmap_57[] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,224,248,252,254,254,254,255,63,31,31,31,127,254,254,254,252,248,224,0,31,63,255,255,255,255,254,240,240,240,240,248,63,255,255,255,255,255,255,0,0,240,240,241,241,241,241,249,249,248,252,255,127,127,63,31,7,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,0,0,0,0,0,0,0,192,224,224,224,224,192,0,1,7,15,15,15,15,7,1,32,248,252,252,252,252,248,32};

static const uint8_t char_width[] = {19,14,19,19,19,17,19,19,19,19,8};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_extrabold_32 = {
    32,
    char_values,
    char_addr,
    char_width
};