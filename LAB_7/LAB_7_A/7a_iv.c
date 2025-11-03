#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    a > b && a > c ? printf("Largest number is: %d\n", a) : b > c ? printf("Largest number is: %d\n", b) : printf("Largest number is: %d\n", c);
    b > a && b > c ? printf("Largest number is: %d\n", b) : c > a ? printf("Largest number is: %d\n", c) : printf("Largest number is: %d\n", a);
    c > a && c > b ? printf("Largest number is: %d\n", c) : a > b ? printf("Largest number is: %d\n", a) : printf("Largest number is: %d\n", b);
    
}