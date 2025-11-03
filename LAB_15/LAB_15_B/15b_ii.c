#include <stdio.h>

int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i, temp;

    int start = 0;
    int end = n - 1;

    printf("Original array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    while (start < end)
    {

        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printf("\n\nReversed array: \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}