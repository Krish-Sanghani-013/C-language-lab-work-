#include <stdio.h>

void main() {
    int i = 1, term = 1;   

    printf("First 50 numbers in series 1, 4, 7, 10...\n");

    while(i <= 50) {
        printf("%d ", term);
        term = term + 3;   
        i++;
    }
}
