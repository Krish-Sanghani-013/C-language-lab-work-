#include <stdio.h>
void main()
{
    int arr[10], pos, ele, i, n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter Element and position\n");
    scanf("%d %d", &ele, &pos);

    n++;

    for (i = n; i <= pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[pos - 1] = ele;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}