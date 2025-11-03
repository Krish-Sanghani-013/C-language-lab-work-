#include <stdio.h>

int main() {
    int x, y;
    printf("Enter base (x): ");
    scanf("%d", &x);
    printf("Enter exponent (y): ");
    scanf("%d", &y);

    int result = 1;
    int i, j;

    for (i = 0; i < y; i++) {
        int temp = 0;
        for (j = 0; j < x; j++) {
            temp = temp + result;
        }
        result = temp;
    }

    printf("%d raised to the power %d is %d\n", x, y, result);
    return 0;
}