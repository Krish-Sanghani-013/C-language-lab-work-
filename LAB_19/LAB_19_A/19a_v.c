#include <stdio.h>

void replaceChar(char s[], char old, char new) {
    int i;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == old) {
            s[i] = new;
        }
    }
}

int main() {
    char s[100], old, new;

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Enter character to replace: ");
    scanf(" %c", &old);

    printf("Enter new character: ");
    scanf(" %c", &new);

    replaceChar(s, old, new);

    printf("Updated string = %s\n", s);

    return 0;
}
