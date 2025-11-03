#include <stdio.h>

int main() {
    int num, i = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Multiplication table of %d:\n", num);

    // Loop to print table from 1 to 10
    while (i <= 10) {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    }

    return 0;
}
