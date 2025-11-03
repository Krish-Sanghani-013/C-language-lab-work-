// #include<stdio.h>                             //FIRST CODE(WITHOUT SCANF)

// int main() {
//     int a=2+2;
//     printf("%d \n" , a);
//     return 0;
// }

//    int main() {                               //SECOND CODE (LONGEST)
//        int a , b;
//        printf("Enter First number :\n");
//        scanf("%d" , &a);

//        printf("Enter Second number:\n");
//        scanf("%d" , &b);

//        printf("sum of a & b is: %d\n" , a+b);

//        return 0;
// }

#include<stdio.h>                            //THIRD CODE(SHORTEST)
    int main() {
        int a , b;

        printf("Enter both numbers:\n");
        scanf("%d %d" , &a, &b);
        printf("sum is: %d\n" , a+b);
        return 0;
    }