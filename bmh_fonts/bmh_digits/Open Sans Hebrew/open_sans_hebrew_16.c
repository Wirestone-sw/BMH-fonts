// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_16

#include "font.h"
#include "open_sans_hebrew_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,64,64,64,192,128,0,255,129,0,0,0,0,255,126};
// '1'
static const uint8_t bitmap_49[] = {0,128,64,192,1,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {128,64,64,64,64,192,128,0,128,192,96,48,24,7};
// '3'
static const uint8_t bitmap_51[] = {128,64,64,64,64,192,128,0,0,0,8,8,24,20,247,224};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,192,192,0,64,112,88,68,67,65,255,255,64};
// '5'
static const uint8_t bitmap_53[] = {0,192,64,64,64,64,64,0,12,15,8,8,8,8,248,224};
// '6'
static const uint8_t bitmap_54[] = {0,128,192,64,64,64,64,0,254,151,8,8,12,8,184,240};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,64,64,192,192,0,0,0,224,56,14,3,0};
// '8'
static const uint8_t bitmap_56[] = {128,192,64,64,64,64,192,0,227,55,28,8,24,20,247,224};
// '9'
static const uint8_t bitmap_57[] = {128,192,64,64,64,192,128,0,15,24,16,16,16,16,255,62};
// ':'
static const uint8_t bitmap_58[] = {0,0,6,6};

static const uint8_t char_width[] = {8,4,7,8,9,8,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
