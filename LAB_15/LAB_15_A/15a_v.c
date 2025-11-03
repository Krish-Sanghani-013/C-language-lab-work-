#include <stdio.h>
#include <string.h>

int main()
{

    char str[100];
    int length;

    printf("Enter a string (one word only): ");

    scanf("%s", str);

    printf("You entered: %s\n", str);

    length = strlen(str);
    printf("Length of the string: %d\n", length);

    return 0;
}