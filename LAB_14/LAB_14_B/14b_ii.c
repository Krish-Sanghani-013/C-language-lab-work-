#include <stdio.h>
#include <math.h>

int main() {
    float arr[10];
    int n, i;
    float sum = 0.0;
    float product = 1.0;
    float reciprocalSum = 0.0;
    
    float avg, geoMean, harMean;

    printf("Enter the number of elements (up to 10): ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        sum = sum + arr[i];
        product = product * arr[i];
        reciprocalSum = reciprocalSum + (1.0 / arr[i]);
    }

    avg = sum / n;
    geoMean = pow(product, 1.0 / n);
    harMean = n / reciprocalSum;

    printf("Average (Arithmetic Mean): %.2f\n", avg);
    printf("Geometric Mean: %.2f\n", geoMean);
    printf("Harmonic Mean: %.2f\n", harMean);

    return 0;
}