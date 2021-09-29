#define _CRT_SECURE_NO_WARNINGS


#include <stdio.h>


void vowels_count(char* str) {
    int vowels = 0;
    int i;
    char ch;

    for (i = 0; str[i] != '\0'; i++) {

        ch = str[i];

        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vowels++;
    }

    printf("Vowels: %d", vowels);
}


int main() {
    char str[256];

    fgets(str, sizeof(str), stdin);

    vowels_count(str);

    return 0;
}