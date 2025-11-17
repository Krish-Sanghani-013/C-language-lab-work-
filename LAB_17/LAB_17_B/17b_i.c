#include <stdio.h>

int main() {
    int a[10], b[10], n, i;
    int *p = a;
    int *q = b;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements in array A:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    for(i = 0; i < n; i++) {
        *(q + i) = *(p + i);
    }

    printf("Array B after copying:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", *(q + i));
    }

    return 0;
}
