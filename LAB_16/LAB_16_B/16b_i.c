#include <stdio.h>

int main() {
    int a[3][3];

    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose of the matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d  ", a[j][i]);
        }
        printf("\n");
    }

    return 0;
}