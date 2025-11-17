#include <stdio.h>

int findChar(char s[], char ch) {
    int i;
    for(i = 0; s[i] != '\0'; i++) {
        if(s[i] == ch)
            return i;        
    }
    return 10;               // character not found
}

int main() {
    char s[100], ch;
    int pos;

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Enter character to find: ");
    scanf(" %c", &ch);

    pos = findChar(s, ch);

    if(pos == 10)
        printf("Character '%c' not found\n", ch);
    else
        printf("Character '%c' found at position %d\n", ch, pos + 1);

    return 0;
}
