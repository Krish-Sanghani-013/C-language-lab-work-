#include <stdio.h>

int main()
{
    int size;
    int sourceArray[5];
    int destArray[5];
    int i;

    printf("Enter number of elements (max 5): ");
    scanf("%d", &size);
    if (size < 1) size = 1;
    if (size > 5) size = 5;

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &sourceArray[i]);
    }

    for (i = 0; i < size; i++) {
        destArray[i] = sourceArray[i];
    }

    printf("The copied array is: ");
    for (i = 0; i < size; i++) {
        printf("%d ", destArray[i]);
    }
    printf("\n");

    return 0;
}