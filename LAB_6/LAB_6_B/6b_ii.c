#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    printf("Enter coefficients a b c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input.\n");
        return 0;
    }

    if (a == 0.0) {
        if (b != 0.0) {
            double x = -c / b;
            printf("Linear equation. Root: x = %.6f\n", x);
        } else {
            if (c == 0.0) printf("Indeterminate: infinitely many solutions.\n");
            else          printf("No solution.\n");
        }
        return 0;
    }

    double disc = b*b - 4*a*c;

    const double EPS = 1e-12;

    if (disc > EPS) {
        double sqrtD = sqrt(disc);
        double x1 = (-b + sqrtD) / (2*a);
        double x2 = (-b - sqrtD) / (2*a);
        printf("Two real roots:\n");
        printf("x1 = %.6f\nx2 = %.6f\n", x1, x2);
    } else if (fabs(disc) <= EPS) {
        double x = -b / (2*a);
        printf("Repeated real root:\n");
        printf("x = %.6f\n", x);
    } else {
        double real = -b / (2*a);
        double imag = sqrt(-disc) / (2*a);
        printf("Complex conjugate roots:\n");
        printf("x1 = %.6f + %.6fi\n", real, imag);
        printf("x2 = %.6f - %.6fi\n", real, imag);
    }

    return 0;
}
