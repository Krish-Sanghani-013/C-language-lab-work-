#include<stdio.h>

void main() {
    int num1, num2, ch;
    printf("enter your number:\n");
    scanf("%d %d",&num1, &num2);

    printf("enter your char:\n");
    scanf("%d", &ch);
    
    if (ch == 1) {
        printf("sum is %d\n", num1 + num2);
    } else if (ch == 2) {
        printf("subtraction is %d\n", num1 - num2);
    } else if (ch == 3) {
        printf("multiplication is %d\n", num1 * num2);
    } else if (ch == 4) {
        printf("division is %d\n", num1 / num2);
    } else {
        printf("Invalid choice\n");
    }
}