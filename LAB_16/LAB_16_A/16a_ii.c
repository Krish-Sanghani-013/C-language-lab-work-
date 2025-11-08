#include <stdio.h>

int main() {
    int arr[3][3];
    int pos = 0, neg = 0, zero = 0;

    printf("Enter 9 elements for a 3x3 matrix:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &arr[i][j]);

            if(arr[i][j] > 0)
                pos++;
            else if(arr[i][j] < 0)
                neg++;
            else
                zero++;
        }
    }

    printf("Positive numbers: %d\n", pos);
    printf("Negative numbers: %d\n", neg);
    printf("Zeroes: %d\n", zero);

    return 0;
}