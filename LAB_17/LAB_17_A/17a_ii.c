#include <stdio.h>

int main() {
    int a;
    float b;
    double c;
    char d;

    printf("Enter an integer: ");
    scanf("%d", &a);

    printf("Enter a float: ");
    scanf("%f", &b);

    printf("Enter a double: ");
    scanf("%lf", &c);

    printf("Enter a character: ");
    scanf(" %c", &d);

    int *p1 = &a;
    float *p2 = &b;
    double *p3 = &c;
    char *p4 = &d;

    printf("\nInteger = %d, Address = %p\n", *p1, p1);
    printf("Float = %.2f, Address = %p\n", *p2, p2);
    printf("Double = %.2lf, Address = %p\n", *p3, p3);
    printf("Char = %c, Address = %p\n", *p4, p4);

    return 0;
}
