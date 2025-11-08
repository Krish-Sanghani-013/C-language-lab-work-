#include <stdio.h>

int main() {
    int a[3][3], zeroCount = 0;

    printf("Enter elements of 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
            if(a[i][j] == 0)
                zeroCount++;
        }
    }

    if(zeroCount > 4)
        printf("It is a sparse matrix.\n");
    else
        printf("It is not a sparse matrix.\n");

    return 0;
}