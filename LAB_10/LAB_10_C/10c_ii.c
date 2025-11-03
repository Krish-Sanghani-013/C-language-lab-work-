#include <stdio.h>

int main() {
    int a, b, hcf, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    hcf = a;

    lcm = (x * y) / hcf;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d\n", lcm);

    return 0;
}