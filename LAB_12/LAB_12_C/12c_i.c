#include <stdio.h>
void main () {
    int n,coef=1;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {



        for (int j = 1; j <= i; j++) {
            if (i == j || j == 1) {
                coef = 1;
            }
             else
            {
                coef = coef *( i - j + 1) / (j-1);
            }
            printf("%d ", coef);
        }
        printf("\n");
    }
