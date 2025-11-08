#include <stdio.h>

int main() {
    int arr[10];
    int n, i, j;

    printf("Enter the number of elements (up to 10n): ");
    scanf("%d", &n);

    printf("Enter %d numbers in ascending order:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Missing numbers are: ");
    for (i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] > 1) {
            for (j = arr[i] + 1; j < arr[i + 1]; j++) {
                printf("%d ", j);
            }
        }
    }
    printf("\n");

    return 0;
}