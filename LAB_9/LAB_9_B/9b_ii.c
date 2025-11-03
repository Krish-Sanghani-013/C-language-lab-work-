// #include <stdio.h>
// void main()
// {
//     int a;
//     printf("Enter a number between 1 and 2000: ");
//     scanf("%d", &a);

//     while (a != 0)
//     {
//         if (a >= 1000 && a <= 2000)
//         {
//             printf("M");
//             a = a - 1000;
//         }
//         else if (a >= 900 && a < 1000)
//         {
//             printf("CM");
//             a = a - 900;
//         }
//         else if (a >= 500 && a < 900)
//         {
//             printf("D");
//             a = a - 500;
//         }
//         else if (a >= 400 && a < 500)
//         {
//             printf("CD");
//             a = a - 400;
//         }
//         else if (a >= 100 && a < 400)
//         {
//             printf("C");
//             a = a - 100;
//         }
//         else if (a >= 90 && a < 100)
//         {
//             printf("XC");
//             a = a - 90;
//         }
//         else if (a >= 50 && a < 90)
//         {
//             printf("L");
//             a = a - 50;
//         }
//         else if (a >= 40 && a < 50)
//         {
//             printf("XL");
//             a = a - 40;
//         }
//         else if (a >= 10 && a < 40)
//         {
//             printf("X");
//             a = a - 10;
//         }
//         else if (a == 9)
//         {
//             printf("IX");
//             a = a - 9;
//         }
//         else if (a >= 5 && a < 9)
//         {
//             printf("V");
//             a = a - 5;
//         }
//         else if (a == 4)
//         {
//             printf("IV");
//             a = a - 4;
//         }
//         else if (a >= 1 && a < 4)
//         {
//             printf("I");
//             a = a - 1;
//         }

//     }
// }

                                                        // Switch Case Program
#include <stdio.h>
void main()
{
    int a;
    printf("Enter a number between 1 and 2000: ");
    scanf("%d", &a);

    while (a != 0)
    {
        switch (a)
        {
        case 1000 ... 2000:
            printf("M");
            a = a - 1000;
            break;
        case 900 ... 999:
            printf("CM");
            a = a - 900;
            break;
        case 500 ... 899:
            printf("D");
            a = a - 500;
            break;
        case 400 ... 499:
            printf("CD");
            a = a - 400;
            break;
        case 100 ... 399:
            printf("C");
            a = a - 100;
            break;
        case 90 ... 99:
            printf("XC");
            a = a - 90;
            break;
        case 50 ... 89:
            printf("L");
            a = a - 50;
            break;
        case 40 ... 49:
            printf("XL");
            a = a - 40;
            break;
        case 10 ... 39:
            printf("X");
            a = a - 10;
            break;
        case 9:
            printf("IX");
            a = a - 9;
            break;
        case 5 ... 8:
            printf("V");
            a = a - 5;
            break;
        case 4:
            printf("IV");
            a = a - 4;
            break;
        case 1 ... 3:
            printf("I");
            a = a - 1;
            break;
        default:
            break;
        }
    }
}