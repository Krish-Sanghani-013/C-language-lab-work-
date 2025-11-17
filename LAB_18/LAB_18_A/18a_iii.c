#include <stdio.h>

float si(float p, float r, float t) {
    return (p * r * t) / 100;
}

int main() {
    float p, r, t;

    printf("Enter Principal, Rate, Time: ");
    scanf("%f %f %f", &p, &r, &t);

    printf("Simple Interest = %.2f\n", si(p, r, t));

    return 0;
}
