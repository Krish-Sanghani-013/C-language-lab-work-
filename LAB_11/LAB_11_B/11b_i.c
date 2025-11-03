#include<stdio.h>
void main(){
    int a = 0, b = 1, n;
    int sum = 0;

    printf("Enter one numbers: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum = a + b;
        printf("%d ", a);
        a = b;
        b = sum;
        
    }
    
}