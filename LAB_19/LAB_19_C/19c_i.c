#include <stdio.h>

int rev = 0;

void rnum(int n) {
    if(n == 0)
        return;

    rev = rev * 10 + (n % 10);
    rnum(n / 10);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    rnum(n);

    printf("Reverse = %d\n", rev);

    return 0;
}
