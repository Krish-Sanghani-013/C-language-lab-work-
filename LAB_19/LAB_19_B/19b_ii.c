#include <stdio.h>

void toUpper(char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;   // convert to uppercase
        }
        i++;
    }
}

int main() {
    char a[100];

    printf("Enter a string: ");
    scanf("%s", a);

    toUpper(a);

    printf("Uppercase string = %s\n", a);

    return 0;
}
