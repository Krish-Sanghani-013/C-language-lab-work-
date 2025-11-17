#include <stdio.h>

int main() {
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);

    return 0;
}
