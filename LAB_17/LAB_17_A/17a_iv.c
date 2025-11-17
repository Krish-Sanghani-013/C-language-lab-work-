#include <stdio.h>

int main() {
    int a, b, t;
    int *p = &a;
    int *q = &b;

    printf("Enter first number: ");
    scanf("%d", p);

    printf("Enter second number: ");
    scanf("%d", q);

    t = *p;
    *p = *q;
    *q = t;

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}
