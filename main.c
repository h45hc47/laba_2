#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


void vowels_count(char* str) {
    int vowels = 0;
    int i;
    char ch;

    for (i = 0; str[i] != '\0'; i++) {

        ch = str[i];

        if (ch == 'A' || ch == 'a'
            || ch == 'E' || ch == 'e'
            || ch == 'I' || ch == 'i'
            || ch == 'O' || ch == 'o'
            || ch == 'U' || ch == 'u')
            vowels++;
    }

    printf("Vowels: %d\n\n", vowels);
}


int main() {
    int i;
    char* strings[3] = { "Who knew, who is who",
                        "A penny saved is a penny gained",
                        "A good beginning makes a good ending" };

    for (i = 0; i != 3; i++) {
        puts(strings[i]);
        vowels_count(strings[i]);
    }
    

    return 0;
}