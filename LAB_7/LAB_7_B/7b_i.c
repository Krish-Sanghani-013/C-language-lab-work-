#include <stdio.h>

int main() {
    int a, b, c, largest, result;

    // Input 3 numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find largest of first two numbers using conditional operator
    largest = (a > b) ? a : b;

    // Multiply largest with third number
    result = largest * c;

    // Output the result
    printf("Result = %d\n", result);

    return 0;
}
