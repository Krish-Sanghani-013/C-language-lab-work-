#include <stdio.h>

void swapValue(int a, int b) {     // call by value
    int t = a;
    a = b;
    b = t;
    printf("Inside swapValue: a = %d, b = %d\n", a, b);
}

void swapRef(int *a, int *b) {     // call by reference
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\n--- Call by Value ---\n");
    swapValue(x, y);     // real x, y will NOT change
    printf("After swapValue (main): x = %d, y = %d\n", x, y);

    printf("\n--- Call by Reference ---\n");
    swapRef(&x, &y);     // real x, y will change
    printf("After swapRef: x = %d, y = %d\n", x, y);

    return 0;
}
