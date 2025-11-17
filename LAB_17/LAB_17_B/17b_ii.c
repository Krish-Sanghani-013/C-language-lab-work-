#include <stdio.h>

int main() {
    int a[10], b[10], n, i, t;
    int *p = a;
    int *q = b;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements in array A:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Enter %d elements in array B:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", q + i);
    }

    for(i = 0; i < n; i++) {
        t = *(p + i);
        *(p + i) = *(q + i);
        *(q + i) = t;
    }

    printf("Array A after swap:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    printf("\nArray B after swap:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(q + i));
    }

    return 0;
}
