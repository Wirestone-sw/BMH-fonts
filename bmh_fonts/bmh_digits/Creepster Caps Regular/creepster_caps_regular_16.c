// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font creepster_caps_regular_16

#include "font.h"
#include "creepster_caps_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {192,224,224,240,224,224,0,127,255,193,193,255,127,2};
// '1'
static const uint8_t bitmap_49[] = {64,240,240,240,48,0,224,255,255,224};
// '2'
static const uint8_t bitmap_50[] = {128,224,224,240,224,224,128,129,193,227,249,191,159,143};
// '3'
static const uint8_t bitmap_51[] = {128,224,224,240,240,224,128,1,129,153,157,223,255,241};
// '4'
static const uint8_t bitmap_52[] = {0,192,224,224,224,0,127,63,51,255,255,48};
// '5'
static const uint8_t bitmap_53[] = {64,224,224,224,224,240,224,3,223,159,153,187,251,99};
// '6'
static const uint8_t bitmap_54[] = {0,192,224,240,224,224,128,63,255,255,217,219,249,113};
// '7'
static const uint8_t bitmap_55[] = {224,240,240,240,240,240,80,0,65,248,254,31,3,0};
// '8'
static const uint8_t bitmap_56[] = {128,224,224,224,240,224,192,1,247,255,157,255,255,115};
// '9'
static const uint8_t bitmap_57[] = {0,224,224,240,224,224,192,3,15,143,204,252,127,31};
// ':'
static const uint8_t bitmap_58[] = {0,0,24,24};

static const uint8_t char_width[] = {7,5,7,7,6,7,7,7,7,7,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t creepster_caps_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
