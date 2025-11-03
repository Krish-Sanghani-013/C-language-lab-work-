#include <stdio.h>

int main() {
    int num, first, last;
    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    int temp = num;
    while (temp >= 10) {
        temp /= 10;
    }
    first = temp;

    printf("Sum of first and last digit: %d\n", first + last);
    return 0;
}