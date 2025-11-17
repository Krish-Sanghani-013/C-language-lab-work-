#include <stdio.h>

int fact(int n)
{
    int i, f = 1;
    for (i = 1; i <= n; i++)
    {
        f = f * i;
    }
    return f;
}

int main()
{
    int n, r, ch;
    int ncr, npr;

    printf("Enter value of n: ");
    scanf("%d", &n);

    printf("Enter value of r: ");
    scanf("%d", &r);

    if (r > n)
    {
        printf("Invalid input! r must be <= n\n");
        return 0;
    }

    printf("\n1. Find nCr");
    printf("\n2. Find nPr");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
        ncr = fact(n) / (fact(r) * fact(n - r));
        printf("nCr = %d\n", ncr);
        break;

    case 2:
        npr = fact(n) / fact(n - r);
        printf("nPr = %d\n", npr);
        break;

    default:
        printf("Invalid Choice!\n");
    }

    return 0;
}
