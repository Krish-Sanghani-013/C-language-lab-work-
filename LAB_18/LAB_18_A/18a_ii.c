#include <stdio.h>

int max(int x, int y) {
    if(x > y)
        return x;
    else
        return y;
}

int min(int x, int y) {
    if(x < y)
        return x;
    else
        return y;
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Maximum = %d\n", max(a, b));
    printf("Minimum = %d\n", min(a, b));

    return 0;
}
