#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Digits of the number: ");
    while (num > 0) {
        printf("%d ", num % 10);
        num /= 10;
    }
    printf("\n");
    return 0;
}