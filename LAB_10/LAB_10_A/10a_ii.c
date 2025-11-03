#include <stdio.h>

int main() {
    int num, sum = 0, count = 0;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        sum += num;
        count++;

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    float average = (float)sum / count;
    printf("Sum = %d, Average = %.2f\n", sum, average);
    return 0;
}