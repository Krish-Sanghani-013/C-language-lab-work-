#include <stdio.h>

int main() {
    int arr[10];
    int n, i;
    float sum = 0.0;
    float avg = 0.0;
    int count = 0;

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    avg = sum / n;

    for (i = 0; i < n; i++) {
        if (arr[i] > avg) {
            count++;
        }
    }

    printf("Average is: %.2f\n", avg);
    printf("Numbers higher than the average: %d\n", count);

    return 0;
}