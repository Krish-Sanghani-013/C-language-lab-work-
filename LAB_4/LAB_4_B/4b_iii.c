#include <stdio.h>

int main() {
     float c , f;

     printf("Enter Fahrenheit:\n");
     scanf("%f" , &f);

     c = (5.0 / 9.0) * (f - 32);

     printf("Temperature in Celsius: %f\n" , c);
    return 0;
}