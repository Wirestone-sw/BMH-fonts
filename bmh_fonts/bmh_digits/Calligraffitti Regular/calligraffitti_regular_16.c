// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font calligraffitti_regular_16

#include "font.h"
#include "calligraffitti_regular_16.h"

// '0'
static const uint8_t bitmap_48[] = {0,128,64,32,16,16,224,126,129,0,0,192,48,15};
// '1'
static const uint8_t bitmap_49[] = {0,32,32,240,16,128,112,15,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,0,64,32,32,16,16,16,224,128,192,160,16,8,4,2,1,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,0,64,32,32,16,16,144,96,192,0,0,0,0,2,2,131,66,60};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,192,48,0,0,192,0,24,14,9,8,200,56,15,8,4};
// '5'
static const uint8_t bitmap_53[] = {128,224,152,136,136,8,8,8,1,0,128,128,64,49,14,0};
// '6'
static const uint8_t bitmap_54[] = {0,0,128,64,32,32,16,0,124,135,4,2,130,66,36,24};
// '7'
static const uint8_t bitmap_55[] = {8,8,8,8,8,200,40,24,8,0,224,24,6,1,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,0,192,32,32,144,80,32,240,8,4,2,1,1,134,120,0};
// '9'
static const uint8_t bitmap_57[] = {0,128,64,32,32,16,32,192,7,8,8,8,136,72,52,15};
// ':'
static const uint8_t bitmap_58[] = {0,144};

static const uint8_t char_width[] = {7,5,9,10,9,8,8,9,9,8,1};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t calligraffitti_regular_16 = {
    16,
    char_values,
    char_addr,
    char_width
};
