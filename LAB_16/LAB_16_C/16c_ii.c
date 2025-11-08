#include <stdio.h>

int main() {
    int a[3][3];

    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Upper Triangular Matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(i > j)
                printf("0\t");
            else
                printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}