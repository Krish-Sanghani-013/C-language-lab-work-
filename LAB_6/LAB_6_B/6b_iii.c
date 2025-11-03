#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check validity
    if (a + b > c && a + c > b && b + c > a) {
        
        // Classification
        if (a == b && b == c) {
            printf("Equilateral Triangle\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("Isosceles Triangle\n");
        } 
        else {
            printf("Scalene Triangle\n");
        }

        // Check right-angled
        if ( (a*a + b*b == c*c) ||
             (a*a + c*c == b*b) ||
             (b*b + c*c == a*a) ) {
            printf("It is also a Right-angled Triangle\n");
        }

    } else {
        printf("Not a valid triangle\n");
    }

    return 0;
}