#include <stdio.h>
#include <stdlib.h>

int main() {
    char confirm;

    printf("Are you sure you want to shutdown the computer? (y/n): ");
    scanf("%c", &confirm);

    if (confirm == 'y' || confirm == 'Y') {
        system("shutdown -h now");  // -h = halt, now = immediately
    } else {
        printf("Shutdown cancelled.\n");
    }

    return 0;
}
