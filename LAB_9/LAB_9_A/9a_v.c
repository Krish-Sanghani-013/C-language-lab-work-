#include <stdio.h>

int main() {
    int n, i = 1;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors of %d are: ",n);

    // Loop from 1 to n
    while (i <= n) {
        if (n % i == 0) {  // Check if i divides n
            printf("%d ", i);
        }
        i++;
    }

    printf("\n");
    return 0;
}
