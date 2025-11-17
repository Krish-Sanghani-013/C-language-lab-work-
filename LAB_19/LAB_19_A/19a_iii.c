#include <stdio.h>
#include <string.h>

int main() {
    char a[100], b[100], c[100];
    int r;

    printf("Enter first string: ");
    scanf("%s", a);

    printf("Enter second string: ");
    scanf("%s", b);

    printf("\nLength of first string = %d\n", strlen(a));
    printf("Length of second string = %d\n", strlen(b));

    r = strcmp(a, b);
    if(r == 0)
        printf("Both strings are SAME\n");
    else
        printf("Strings are DIFFERENT\n");

    strcpy(c, a);
    printf("Copy of first string = %s\n", c);

    strcat(a, b);
    printf("Concatenation (a + b) = %s\n", a);

    strrev(c);
    printf("Reverse of copied string = %s\n", c);

    printf("Lowercase of second string = %s\n", strlwr(b));
    printf("Uppercase of second string = %s\n", strupr(b));

    return 0;
}
