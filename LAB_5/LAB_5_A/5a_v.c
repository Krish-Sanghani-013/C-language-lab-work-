#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter number:\n");
    scanf("%d %d %d", &a, &b, &c);

    int largest= (a>b && a>c)? a : (b>c ? b : c);
    printf("Largest= %d\n" , largest);



//     if (a>b && a>c)
//     {
//         printf("A is Largest\n");
//     }
//     else if (b>c)
//     {
//         printf("B is Largest\n");
//     }
//     else{
//         printf("C is Largest\n");
//     }
    return 0;
}