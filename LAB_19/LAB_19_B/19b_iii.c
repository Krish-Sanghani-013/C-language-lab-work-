#include <stdio.h>

void swapArray(int a[], int b[], int n) {
    int i, t;
    for(i = 0; i < n; i++) {
        t = a[i];
        a[i] = b[i];
        b[i] = t;
    }
}

int main() {
    int a[10], b[10], n, i;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements for first array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter %d elements for second array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    swapArray(a, b, n);

    printf("After swapping, first array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    printf("\nAfter swapping, second array:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", b[i]);
    }

    return 0;
}
