#include <stdio.h>

int main() {
    int seconds, hrs, mins, secs;

    printf("Enter total seconds: ");
    scanf("%d", &seconds);

    hrs = seconds / 3600;          
    mins = (seconds % 3600) / 60;  
    secs = seconds % 60;           

    printf("%02d:%02d:%02d\n", hrs, mins, secs);

    return 0;
}
