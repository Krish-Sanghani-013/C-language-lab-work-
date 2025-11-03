#include <stdio.h>

int main() {
    int days, years, weeks, remDays;

    printf("Enter total days: ");
    scanf("%d", &days);

    years = days / 365;           
    weeks = (days % 365) / 7;     
    remDays = (days % 365) % 7;   

    printf("%d days = %d year(s), %d week(s) and %d day(s)\n", days, years, weeks, remDays);

    return 0;
}
