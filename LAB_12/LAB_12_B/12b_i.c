#include <stdio.h>

int main() {
    int n, i, j, total = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            total += j;
        }
    }

    printf("Sum of the series is: %d\n", total);
    return 0;
}