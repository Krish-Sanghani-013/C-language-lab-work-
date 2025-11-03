#include<stdio.h>
void main(){
    int n,b=0, ans = 0,place=1;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n%2;
        b = b+(rem*place);
        n/=2;
        place*=10;
    }

    printf("Binary: %d\n", b);
}