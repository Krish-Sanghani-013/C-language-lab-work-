#include <stdio.h>

int main() {
     float p , r , t;
     printf("Enter your values:\n");
     scanf("%f %f %f" , &p , &r , &t);
     printf("Total interest is: %f\n" , (p*r*t)/100);
    return 0;
}