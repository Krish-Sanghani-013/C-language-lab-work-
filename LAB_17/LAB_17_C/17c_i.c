#include <stdio.h>

int main()
{
    char s[50], *p;
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", s);

    p = s;

    while (*p != '\0')
    {
        len++;
        p++;
    }

    printf("Length of string = %d\n", len);

    return 0;
}
