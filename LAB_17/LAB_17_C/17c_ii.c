#include <stdio.h>

int main()
{
    int a[10], n, i, j, t;
    int *p = a;

    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (*(p + i) > *(p + j))
            {
                t = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = t;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}
