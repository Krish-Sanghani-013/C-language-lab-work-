#include <stdio.h>

int main() {
    int data[20][2]; // [roll no, marks]

    printf("Enter roll number and marks for 20 students:\n");
    for(int i = 0; i < 20; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &data[i][0]);
        printf("Marks: ");
        scanf("%d", &data[i][1]);
    }

    printf("\nStored Data:\n");
    printf("Roll No Marks\n");
    for(int i = 0; i < 20; i++) {
        printf("%d  %d\n", data[i][0], data[i][1]);
    }

    return 0;
}