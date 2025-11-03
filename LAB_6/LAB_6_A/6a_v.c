#include <stdio.h>

int main() {
    int m1, m2, m3, m4, m5;
    float total, percentage;

    // Input marks
    printf("Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    // Calculate total and percentage
    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    // result
    if (percentage < 35)
        printf("Fail (Percentage: %.2f)\n", percentage);
    else if (percentage >= 36 && percentage <= 45)
        printf("Pass Class (Percentage: %.2f)\n", percentage);
    else if (percentage >= 46 && percentage <= 60)
        printf("Second Class (Percentage: %.2f)\n", percentage);
    else if (percentage >= 61 && percentage <= 70)
        printf("First Class (Percentage: %.2f)\n", percentage);
    else
        printf("Distinction (Percentage: %.2f)\n", percentage);

    return 0;
}
