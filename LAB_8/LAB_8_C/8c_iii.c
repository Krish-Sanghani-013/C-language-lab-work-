#include<stdio.h>
void main(){
    int a, b, Q=0, R;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
    {
        while (a >= b)
        {
            a = a - b;
            Q++;
        }
        R = a;
        printf("Quotient = %d\nRemainder = %d\n", Q, R);
    }
    else
    {
        while (b >= a)
        {
            b = b - a;
            Q++;
        }
        R = b;
        printf("Quotient = %d\nRemainder = %d\n", Q, R);
    }
    
}