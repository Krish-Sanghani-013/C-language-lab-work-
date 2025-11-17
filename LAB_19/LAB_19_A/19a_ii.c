#include <stdio.h>

void show(int a[], int n) {
    int i;
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}

int main() {
    int a[10], n, i;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Array elements are:\n");
    show(a, n);

    return 0;
}
