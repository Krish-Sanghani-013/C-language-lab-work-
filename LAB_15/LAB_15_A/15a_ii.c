#include <stdio.h>

int main()
{
    int arr[5];
    int size;
    int negativeCount = 0;
    int i;

    printf("Enter number of elements (max 5): ");
    scanf("%d", &size)
        // if (size < 1) size = 1;
        ;
    if (size > 5)
        size = 5;

    printf("Enter elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            negativeCount++;
        }
    }

    printf("Total negative elements: %d\n", negativeCount);
}