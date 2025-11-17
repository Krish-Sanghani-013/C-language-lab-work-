#include <stdio.h>

int powr(int a, int b) {
    if(b == 0)
        return 1;
    return a * powr(a, b - 1);
}

int main() {
    int a, b;

    printf("Enter base: ");
    scanf("%d", &a);

    printf("Enter power: ");
    scanf("%d", &b);

    printf("Answer = %d\n", powr(a, b));

    return 0;
}
