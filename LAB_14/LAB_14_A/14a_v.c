#include <stdio.h>

int main() {
    int height[5], weight[5], count = 0;

    printf("Enter height and weight of 5 persons:\n");
    for(int i = 0; i < 5; i++) {
        printf("Person %d - Height: ", i+1);
        scanf("%d", &height[i]);
        printf("Person %d - Weight: ", i+1);
        scanf("%d", &weight[i]);

        if(height[i] > 170 && weight[i] < 50)
            count++;
    }

    printf("Number of persons with height > 170 and weight < 50: %d\n", count);

    return 0;
}