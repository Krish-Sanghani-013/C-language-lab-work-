#include <stdio.h>

int main() {
    char ch;

    // Uppercase letters
    printf("Uppercase letters: ");
    ch = 'A';
    while (ch <= 'Z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");

    // Lowercase letters
    printf("Lowercase letters: ");
    ch = 'a';
    while (ch <= 'z') {
        printf("%c ", ch);
        ch++;
    }
    printf("\n");

    return 0;
}
