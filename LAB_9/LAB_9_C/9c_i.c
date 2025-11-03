#include <stdio.h>
#include <string.h>

int main() {
    int n, digit, rev = 0;
    char ans[500] = "";

    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n;

    while (temp > 0) {
        rev = rev * 10 + (temp % 10);
        temp = temp / 10;              
    }

    while (rev > 0) {  
        digit = rev % 10;
        switch (digit) {
            case 0: strcat(ans, "Zero "); break;
            case 1: strcat(ans, "One ");  break;
            case 2: strcat(ans, "Two ");  break;
            case 3: strcat(ans, "Three ");break;
            case 4: strcat(ans, "Four "); break;
            case 5: strcat(ans, "Five "); break;
            case 6: strcat(ans, "Six ");  break;
            case 7: strcat(ans, "Seven ");break;
            case 8: strcat(ans, "Eight ");break;
            case 9: strcat(ans, "Nine "); break;
        }
        rev = rev / 10;
    }

    printf("In words: %s\n", ans);
    return 0;
}
