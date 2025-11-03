#include <stdio.h>

int main()
{
    int num, temp, first, last, middle, place = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    last = num % 10;

    while (temp >= 10)
    {
        temp /= 10;
        place *= 10;
    }
    first = temp;

    middle = (num % place) / 10;

    int swapped = last * place + middle * 10 + first;

    printf("Number after swapping first and last digits: %d\n", swapped);

    return 0;
}
