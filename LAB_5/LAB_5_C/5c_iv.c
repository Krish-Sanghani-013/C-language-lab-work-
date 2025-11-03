// #include <stdio.h>

// int main() {
//     int X = 5;

//     if (X == 1) {
//         printf("%d", X);
//     } else {
//         printf("%d", X);
//     }

//     return 0;
// }
// // This program checks the value of X and prints it. If X is 1, it prints 1; otherwise, it prints 5.



// #include <stdio.h>

// int main() {
//     int X = 5;

//     if (true) {
//         printf("hello");
//     }

//     return 0;
// }
//error: implicit declaration of function 'true' is invalid in C



#include <stdio.h>

int main() {
    int X = 5;

    if (X < 1)
        printf("hello");

    if (X == 5)
        printf("hi");
    else
        printf("hi");

    return 0;
}
// This program demonstrates the use of if-else statements in C.
//output:hi