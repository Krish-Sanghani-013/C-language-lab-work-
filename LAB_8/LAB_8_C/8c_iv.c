#include <stdio.h>

int main() {
    int num1, num2, result = 0;
    int i = 0;

    // Take input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Multiplication using repeated addition with while loop
    while (i < num2) {
        result += num1;
        i++;
    }

    // Display result
    printf("Result: %d\n", result);

    return 0;
}
