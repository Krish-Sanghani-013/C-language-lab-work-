#include <stdio.h>

int main() {
    int x, y;
    long long result = 1; // Store result, use long long for large powers
    int i = 1;

    // Input base and exponent
    printf("Enter base (x) and exponent (y): ");
    scanf("%d %d", &x, &y);

    // Repeated multiplication
    while (i <= y) {
        result *= x;
        i++;
    }

    // Display result
    printf("%d^%d = %lld\n", x, y, result);

    return 0;
}