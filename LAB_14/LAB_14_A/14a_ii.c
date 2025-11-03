#include <stdio.h>

int main() {
    int n, pos = 0, neg = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] >= 0)
            pos++;
        else
            neg++;
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);

    return 0;
}