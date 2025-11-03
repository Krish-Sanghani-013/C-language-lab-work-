#include <stdio.h>
#include <time.h>  

int main() {
    time_t current_time;               // A variable to store the time

    current_time = time(NULL);         // Get the current system time

    printf("Current Date and Time: %s\n", ctime(&current_time));  // Show it in readable format

    return 0;
}
