#include <stdio.h>

int main() {
    int n, i = 1, sum = 0;

    // Step 3: Input n
    printf("Enter n: ");
    scanf("%d", &n);

    // Step 4: Loop using while
    while (i <= n) {
        if (i % 2 == 1) {
            // Odd → add
            sum += i;
        } else {
            // Even → subtract
            sum -= i;
        }
        i++; // Increment counter
    }

    // Step 7: Output result
    printf("Sum of series = %d\n", sum);

    return 0;
}
