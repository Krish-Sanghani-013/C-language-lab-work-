#include <stdio.h>

int main() {
    int arr[100];
    int size;
    int divisibleCount = 0;
    int i;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);
    if (size < 1) size = 1;
    if (size > 100) size = 100;

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++) {
        if (arr[i] % 3 == 0) {
            divisibleCount = divisibleCount + 1;
        }
    }

    printf("Total elements divisible by 3: %d\n", divisibleCount);

    return 0;
}