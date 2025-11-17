#include <stdio.h>

int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int rfact(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * rfact(n - 1);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial using loop = %d\n", fact(n));
    printf("Factorial using recursion = %d\n", rfact(n));

    return 0;
}
