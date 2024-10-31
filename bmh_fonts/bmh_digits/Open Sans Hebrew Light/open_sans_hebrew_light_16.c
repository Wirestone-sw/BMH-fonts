// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font open_sans_hebrew_light_16

#include "font.h"
#include "open_sans_hebrew_light_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,192,64,64,64,64,128,0,255,0,0,0,0,0,129,126};
// '1'
static const uint8_t bitmap_49[] = {0,128,64,192,1,0,0,255};
// '2'
static const uint8_t bitmap_50[] = {128,64,64,64,64,64,128,0,0,128,64,48,8,7};
// '3'
static const uint8_t bitmap_51[] = {128,64,64,64,64,64,128,0,0,0,8,8,8,20,183,64};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,0,128,64,128,0,64,96,88,68,67,64,255,64,64};
// '5'
static const uint8_t bitmap_53[] = {192,64,64,64,64,64,0,15,8,8,8,8,16,224};
// '6'
static const uint8_t bitmap_54[] = {0,128,128,64,64,64,64,0,254,17,8,4,4,8,8,240};
// '7'
static const uint8_t bitmap_55[] = {64,64,64,64,64,64,192,64,0,0,0,192,48,14,1,0};
// '8'
static const uint8_t bitmap_56[] = {0,192,64,64,64,64,128,0,227,20,20,8,8,20,51,192};
// '9'
static const uint8_t bitmap_57[] = {128,64,64,64,64,64,128,0,15,16,16,16,16,16,233,30};
// ':'
static const uint8_t bitmap_58[] = {0,0,12,12};

static const uint8_t char_width[] = {8,4,7,8,9,7,8,8,8,8,2};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t open_sans_hebrew_light_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
