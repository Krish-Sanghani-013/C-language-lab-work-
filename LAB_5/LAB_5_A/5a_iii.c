#include <stdio.h>

int main() {
    int pn;
    printf("Enter Any number: \n");
    scanf("%d", &pn);
    
    if (pn < 0)
    {
        printf("NAGATIVE number\n");
    }
    else{
        printf("POSITIVE number\n");
    }    
    return 0;
}