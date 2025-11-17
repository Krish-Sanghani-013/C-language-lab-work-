#include <stdio.h>

void fibbo(int n)
{
    int a = 0, b = 1, c, i;

    if (n >= 1)
        printf("%d ", a);
    if (n >= 2)
        printf("%d ", b);

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main()
{
    int n;

    printf("Enter how many terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    fibbo(n);

    return 0;
}
