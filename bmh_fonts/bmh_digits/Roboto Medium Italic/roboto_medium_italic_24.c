// Font File for SSD1306 characters
// Generated with TTF2BMH
// Font roboto_medium_italic_24

#include "font.h"
#include "roboto_medium_italic_24.h"

// '0'
static const uint8_t bitmap_48[] = {0,248,252,255,15,7,3,3,3,207,255,254,127,255,255,192,128,128,128,192,240,255,127,15,0,1,1,3,3,3,3,3,1,0,0,0};
// '1'
static const uint8_t bitmap_49[] = {56,24,28,28,238,254,254,31,0,0,0,248,255,255,7,0,0,0,6,7,7,1,0,0};
// '2'
static const uint8_t bitmap_50[] = {0,28,30,31,7,3,3,3,195,255,255,126,192,192,224,240,184,156,142,135,131,129,128,0,3,3,3,3,3,3,3,3,3,3,3,0};
// '3'
static const uint8_t bitmap_51[] = {0,0,12,14,15,135,131,131,131,195,255,255,62,96,224,224,192,128,131,131,131,199,255,254,124,0,0,0,1,3,3,3,3,3,3,1,0,0,0};
// '4'
static const uint8_t bitmap_52[] = {0,0,0,0,128,192,224,120,60,254,255,255,31,0,112,120,124,126,119,115,112,112,248,255,255,119,112,16,0,0,0,0,0,0,0,6,7,7,1,0,0,0};
// '5'
static const uint8_t bitmap_53[] = {0,0,240,255,255,207,199,199,199,135,135,7,7,224,225,227,131,1,1,1,129,195,255,255,62,0,0,3,3,7,7,7,7,7,3,1,0,0,0};
// '6'
static const uint8_t bitmap_54[] = {0,192,240,248,188,222,206,206,199,135,135,0,126,255,255,135,3,1,1,129,195,255,255,62,0,1,3,7,7,7,7,7,3,1,0,0};
// '7'
static const uint8_t bitmap_55[] = {7,7,7,7,7,7,7,199,247,255,63,15,7,0,0,192,224,248,126,31,7,3,0,0,0,0,4,7,7,3,0,0,0,0,0,0,0,0,0};
// '8'
static const uint8_t bitmap_56[] = {0,0,254,255,255,135,131,131,195,255,255,126,8,248,252,254,135,131,131,131,195,255,254,124,0,0,0,1,3,3,3,3,3,3,1,1,0,0,0};
// '9'
static const uint8_t bitmap_57[] = {248,254,255,7,3,3,3,7,255,255,252,3,135,143,143,206,206,230,255,63,31,3,2,3,3,3,1,1,0,0,0,0,0};
// ':'
static const uint8_t bitmap_58[] = {0,0,32,112,112,32,0,128,128,128,0,0,1,3,3,3,0,0};

static const uint8_t char_width[] = {12,8,12,13,14,13,12,13,13,11,6};

static const uint8_t *char_addr[] = {bitmap_48, bitmap_49, bitmap_50, bitmap_51, bitmap_52, bitmap_53, bitmap_54, bitmap_55, bitmap_56, bitmap_57, bitmap_58};

// char_values for '0123456789:'
static const uint8_t char_values[] = {48,49,50,51,52,53,54,55,56,57,58,};

const font_t roboto_medium_italic_24 = {
    24,
    char_values,
    char_addr,
    char_width
};
