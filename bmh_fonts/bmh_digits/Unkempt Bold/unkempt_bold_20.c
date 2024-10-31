// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font unkempt_bold_20

#include "font.h"
#include "unkempt_bold_20.h"

// '0'
static const uint8_t bitmap_48[] = {0,0,128,192,192,64,96,64,192,192,128,0,0,0,252,239,3,0,0,0,0,0,0,0,3,143,254,48};
// '1'
static const uint8_t bitmap_49[] = {0,128,192,128,0,2,3,255,255,0};
// '2'
static const uint8_t bitmap_50[] = {0,192,224,96,96,32,96,96,192,0,1,131,192,192,96,48,56,30,135,129};
// '3'
static const uint8_t bitmap_51[] = {224,224,96,96,96,96,224,224,224,96,0,1,129,8,12,6,7,7,7,220,248,32};
// '4'
static const uint8_t bitmap_52[] = {0,0,128,224,96,0,0,224,224,0,0,8,30,31,27,24,24,24,255,255,24,8};
// '5'
static const uint8_t bitmap_53[] = {64,224,96,96,96,96,96,96,224,128,0,13,31,24,12,12,12,12,12,29,249,224};
// '6'
static const uint8_t bitmap_54[] = {0,0,0,128,192,192,64,96,64,0,0,0,0,240,254,247,57,28,12,12,12,12,24,56,240,128};
// '7'
static const uint8_t bitmap_55[] = {224,224,96,96,96,96,96,96,224,224,1,1,0,0,192,240,60,15,3,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,192,192,96,96,32,32,96,224,192,0,128,231,127,56,24,24,24,24,24,63,247,224};
// '9'
static const uint8_t bitmap_57[] = {0,0,192,192,64,96,64,192,192,192,0,0,30,63,97,96,192,64,64,96,96,243,255,28};
// ':'
static const uint8_t bitmap_58[] = {0,0,224,192};

static const uint8_t char_width[] = {14,5,10,11,11,11,13,10,12,12,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t unkempt_bold_20 = {
    20,
    char_values,
    char_addr,
    char_width
};
