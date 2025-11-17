#include <stdio.h>

float max3(float a, float b, float c) {
    float m = a;

    if(b > m) m = b;
    if(c > m) m = c;

    return m;
}

int main() {
    float x, y, z;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Maximum = %.2f\n", max3(x, y, z));

    return 0;
}
