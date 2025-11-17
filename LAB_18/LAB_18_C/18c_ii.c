#include <stdio.h>

void one(int n) {
    if(n==1) printf("One ");
    else if(n==2) printf("Two ");
    else if(n==3) printf("Three ");
    else if(n==4) printf("Four ");
    else if(n==5) printf("Five ");
    else if(n==6) printf("Six ");
    else if(n==7) printf("Seven ");
    else if(n==8) printf("Eight ");
    else if(n==9) printf("Nine ");
}

void twoLess20(int n) {
    if(n==10) printf("Ten ");
    else if(n==11) printf("Eleven ");
    else if(n==12) printf("Twelve ");
    else if(n==13) printf("Thirteen ");
    else if(n==14) printf("Fourteen ");
    else if(n==15) printf("Fifteen ");
    else if(n==16) printf("Sixteen ");
    else if(n==17) printf("Seventeen ");
    else if(n==18) printf("Eighteen ");
    else if(n==19) printf("Nineteen ");
}

void tens(int n) {
    if(n==2) printf("Twenty ");
    else if(n==3) printf("Thirty ");
    else if(n==4) printf("Forty ");
    else if(n==5) printf("Fifty ");
    else if(n==6) printf("Sixty ");
    else if(n==7) printf("Seventy ");
    else if(n==8) printf("Eighty ");
    else if(n==9) printf("Ninety ");
}

void convert(int n) {
    if(n >= 1000) {
        one(n/1000);
        printf("Thousand ");
        n = n % 1000;
    }

    if(n >= 100) {
        one(n/100);
        printf("Hundred ");
        n = n % 100;
    }

    if(n >= 20) {
        tens(n/10);
        n = n % 10;
    }
    else if(n >= 10) {
        twoLess20(n);
        return;
    }

    if(n > 0)
        one(n);
}

int main() {
    int n;

    printf("Enter an amount (0 - 99999): ");
    scanf("%d", &n);

    if(n == 0) {
        printf("Zero");
        return 0;
    }

    convert(n);

    return 0;
}
