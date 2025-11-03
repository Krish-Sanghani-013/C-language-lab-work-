// logic used is:- We divide number with 2 and then multiply with 2, if answer is same then it's odd else it's even

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if ((num / 2) * 2 == num)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}

// Using bitwise operator:- If last bit is 1 then it's odd else it's even
    // if (num & 1) // check last bit
    // printf("%d is Odd\n", num);
    // else
    // printf("%d is Even\n", num);