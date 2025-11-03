#include <stdio.h>
#include <math.h>   // for sqrt() function

void main() {
    int i = 0;

    printf("Number   Square Root\n");
    printf("---------------------\n");

    while(i <= 9) {
        printf("%d        %f\n", i, sqrt(i));
        i++;   // move to next number
    }
}
