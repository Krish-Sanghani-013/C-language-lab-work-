#include <stdio.h>

int mylen(char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        i++;
    }
    return i;
}

void mycopy(char d[], char s[]) {
    int i = 0;
    while(s[i] != '\0') {
        d[i] = s[i];
        i++;
    }
    d[i] = '\0';
}

void mycat(char d[], char s[]) {
    int i = 0, j = 0;

    while(d[i] != '\0') {
        i++;
    }

    while(s[j] != '\0') {
        d[i] = s[j];
        i++;
        j++;
    }

    d[i] = '\0';
}

int mycmp(char a[], char b[]) {
    int i = 0;

    while(a[i] != '\0' && b[i] != '\0') {
        if(a[i] != b[i])
            return 0;
        i++;
    }

    if(a[i] == '\0' && b[i] == '\0')
        return 1;
    else
        return 0;
}

void myrev(char s[]) {
    int i = 0, j = mylen(s) - 1;
    char t;

    while(i < j) {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
        i++;
        j--;
    }
}

int main() {
    int ch;
    char a[100], b[100], c[100];

    while(1) {

        printf("\n------ MENU ------\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenate\n");
        printf("4. Compare\n");
        printf("5. Reverse\n");
        printf("6. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);

        if(ch == 6) {
            break;
        }
        else if(ch == 1) {
            printf("Enter string: ");
            scanf("%s", a);
            printf("Length = %d\n", mylen(a));
        }
        else if(ch == 2) {
            printf("Enter string: ");
            scanf("%s", a);
            mycopy(b, a);
            printf("Copied string = %s\n", b);
        }
        else if(ch == 3) {
            printf("Enter first string: ");
            scanf("%s", a);
            printf("Enter second string: ");
            scanf("%s", b);
            mycopy(c, a);
            mycat(c, b);
            printf("Concatenated string = %s\n", c);
        }
        else if(ch == 4) {
            printf("Enter first string: ");
            scanf("%s", a);
            printf("Enter second string: ");
            scanf("%s", b);

            if(mycmp(a, b) == 1)
                printf("Both strings are same\n");
            else
                printf("Strings are different\n");
        }
        else if(ch == 5) {
            printf("Enter string: ");
            scanf("%s", a);
            myrev(a);
            printf("Reversed string = %s\n", a);
        }
        else {
            printf("Invalid choice, try again\n");
        }
    }

    return 0;
}
