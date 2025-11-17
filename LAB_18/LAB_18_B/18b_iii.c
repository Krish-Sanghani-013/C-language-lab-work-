#include <stdio.h>

int isPrime(int n) {
    int i;
    if(n <= 1) return 0;

    for(i = 2; i < n; i++) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int a, b, i;

    printf("Enter starting number: ");
    scanf("%d", &a);

    printf("Enter ending number: ");
    scanf("%d", &b);

    printf("Prime numbers between %d and %d are:\n", a, b);

    for(i = a; i <= b; i++) {
        if(isPrime(i))
            printf("%d ", i);
    }

    return 0;
}
