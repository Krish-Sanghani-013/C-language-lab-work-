#include <stdio.h>

int main() {
    int num, last_digit;
    printf("Enter an integer: ");
    scanf("%d", &num);

    last_digit = num % 10;

    if (last_digit % 2 == 0) {
        printf("Last digit %d is even.\n", last_digit);
    } else {
        printf("Last digit %d is odd.\n", last_digit);
    }

    return 0;
}