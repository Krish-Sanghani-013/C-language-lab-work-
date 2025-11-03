#include <stdio.h>

int main() {
    int n;
    long long factorial = 1; // Use long long for large factorials
    int i = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Factorial calculation using while loop
    while (i <= n) {
        factorial *= i;
        i++;
    }

    // Display result
    printf("Factorial of %d = %lld\n", n, factorial);

    return 0;
}
