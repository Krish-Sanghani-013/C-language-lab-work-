#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int mul = num << 1;  // multiply by 2
    int div = num >> 1;  // divide by 2

    printf("Number multiplied by 2: %d\n", mul);
    printf("Number divided by 2: %d\n", div);

    return 0;
}