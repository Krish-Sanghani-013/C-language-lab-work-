#include <stdio.h>

int isPrime(int n)
{
    int i;
    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int isArmstrong(int n)
{
    int t = n, r, sum = 0;

    while (t > 0)
    {
        r = t % 10;
        sum = sum + (r * r * r);
        t = t / 10;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int isPerfect(int n)
{
    int i, sum = 0;

    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        return 1;
    else
        return 0;
}

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n))
        printf("%d is Prime\n", n);
    else
        printf("%d is Not Prime\n", n);

    if (isArmstrong(n))
        printf("%d is Armstrong\n", n);
    else
        printf("%d is Not Armstrong\n", n);

    if (isPerfect(n))
        printf("%d is Perfect\n", n);
    else
        printf("%d is Not Perfect\n", n);

    return 0;
}
