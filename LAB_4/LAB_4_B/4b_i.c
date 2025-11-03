#include <stdio.h>

int main() {
    float h, b;
    printf("Enter heigh and base of Triangle:\n");
    scanf("%f %f" , &h , &b);
    printf("Area of triangle is: %f\n" , (h*b)/2);
    return 0;
}