#include <string.h>
#include <stdio.h>

#include "font.h"

#include "aclonica_regular_8.h"
#include "aclonica_regular_24.h"



void dump_char_bytes(const char* char_ptr, char char_width, char char_height) {
    int char_bits = char_width * char_height;
    int char_bytes = (char_bits + 7) / 8;

    for (int i = 0; i < char_bytes; i++) {
        printf("%d, ", char_ptr[i] & 0xFF);
    }
    printf("\n");
}

void print_char(const char* char_ptr, char char_width, char char_height) {

    for (int x = 0; x < char_width; x++) {
        for (int y = 0; y < char_height; y++) {
            int bit_index = x * char_height + y;
            int bit_val = char_ptr[bit_index / 8] & (1 << (7 - bit_index % 8));
            if (bit_val) {
                printf("-");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


void print_font(const struct font_t* font) {
    printf("Font height: %d\n", font->font_height);
    int i_char = 0;

    while (font->char_values[i_char] != '\0') {
        printf("Char #%d: \"%c\" - width: %d\n", i_char, font->char_values[i_char], font->char_width[i_char]);
        dump_char_bytes(font->char_addr[i_char], font->char_width[i_char], font->font_height);
        print_char(font->char_addr[i_char], font->char_width[i_char], font->font_height);

        i_char++;
    }
}

int test_font(const struct font_t* font) {

    char test_string[] = " !,-.1234567890";
    for (int i = 0; i < strlen(test_string); i++) {
        const char* char_ptr;
        char char_width;
        char char_height = font->font_height;

        printf("Checking \"%c\"\n", test_string[i]);

        if (find_char_index(font, test_string[i], &char_ptr, &char_width) == 0) {
            printf("Char width: %d\n", char_width);
            printf("Char height: %d\n", char_height);
            printf("Char ptr: %p\n", char_ptr);
            print_char(char_ptr, char_width, char_height);
        } else {
            printf("Not found %c\n", test_string[i]);
        }

        
    }
}

int main(int argc, char** argv)
{
    print_font(&aclonica_regular_8);
    test_font(&aclonica_regular_8);
    test_font(&aclonica_regular_24);

    return 0;
}

