#include <stdio.h>

int main() {
    int a, b, sum;
    int *p = &a;
    int *q = &b;

    printf("Enter first number: ");
    scanf("%d", p);

    printf("Enter second number: ");
    scanf("%d", q);

    sum = *p + *q;

    printf("Sum = %d\n", sum);

    return 0;
}
