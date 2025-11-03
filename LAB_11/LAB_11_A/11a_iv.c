#include <stdio.h>

int main() {
    int x, y, result = 1;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    for (int i = 1; i <= y; i++) {
        result *= x;
    }

    printf("%d raised to the power %d is %d\n", x, y, result);
    return 0;
}