#include <stdio.h>

int main()
{
    int arr[100];
    int size;
    int searchKey;
    int i;

    printf("Enter number of elements (max 100): ");
    scanf("%d", &size);
    if (size < 1) size = 1;
    if (size > 100) size = 100;

    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int found = 0;

    printf("Enter a number to search for: ");
    scanf("%d", &searchKey);

    for (i = 0; i < size; i++)
    {
        if (arr[i] == searchKey)
        {
            found = 1;
            break;
        }
    }

    if (found == 1)
    {
        printf("Element %d was found in the array.\n", searchKey);
    }
    else
    {
        printf("Element %d was NOT found.\n", searchKey);
    }

    return 0;
}