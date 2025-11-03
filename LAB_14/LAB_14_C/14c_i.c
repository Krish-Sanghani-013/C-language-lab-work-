#include <stdio.h>

int main() {
    int arr[10];
    int n, i, j;
    int count = 0;

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
    }

    printf("Total duplicate pairs found: %d\n", count);

    return 0;
}