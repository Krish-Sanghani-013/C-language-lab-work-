#include <stdio.h>
void main()
{
    int arr[5], i, temp;
    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array element before swapping:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < 5; i++)
    {
        temp = arr[0];
        arr[0] = arr[4];
        arr[4] = temp;
    }

    printf("\nArray element after swapping:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
}