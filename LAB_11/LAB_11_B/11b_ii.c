#include<stdio.h>
void main(){
    int n, temp, digit, count;
    
    printf("Enter one number: ");
    scanf("%d", &n);

    // Loop through each digit 0-9
    for(int i = 0; i <= 9; i++){
        temp = n;      // Reset temp for each digit (IMPORTANT)
        count = 0;     // Reset count for each digit

        while(temp > 0){
            digit = temp % 10;
            if (digit == i){
                count++;
            }
            temp /= 10;
        }

        if(count > 0){
            printf("The digit %d occurs %d times in %d\n", i, count, n);
        }
    }
}
