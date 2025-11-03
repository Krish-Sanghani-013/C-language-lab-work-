#include<stdio.h>
void main() {
    float units, surcharge, total, amount;
    printf("enter unit count;");
    scanf("%f", &units);

    if (units <= 50)
    {
        amount = units * 0.50;
    }
    else if (units <= 150)
    {
        amount = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        amount = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        amount = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }
    
    surcharge = 0.20 * amount;
    total = amount + surcharge;

    printf("\nelectricity Bill\n");
    printf("sub total : Rs. %f\n", amount);
    printf("surcharge : Rs. %f\n" , surcharge);
    printf("total amount : Rs. %f\n", total);
}