#include<stdio.h>
int main() {
    int a=4;
    int b=8;

    printf("Befor swap: a=%d, b=%d\n" , a , b);

    a=a+b;
    b=a-b;
    a=b-a;
    
    printf("After swap: a=%d, b=%d\n" , a, b);
    return 0;
}






// #include <stdio.h>

// int main() {
//     int a=4;
//     int b=8;
//     int temp;

//     //before swap
//     printf("Before swap: a=%d, b=%d\n", a , b);

//     // //swap using temp
//     temp=a;
//     a=b;
//     b=temp;

//     // //after swap
//     printf("After swap: a=%d, b=%d\n" , a , b);

//     return 0;
// }








