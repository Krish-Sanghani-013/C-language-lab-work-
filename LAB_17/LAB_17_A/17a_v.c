#include <stdio.h>

int main()
{
    int a[100], n, i;
    int *p = a;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", p + i);
    }

    printf("You entered:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", *(p + i));
    }

    return 0;
}
