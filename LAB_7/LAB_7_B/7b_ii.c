#include<stdio.h>
void main(){
    char a;
    printf("enter:\n");
    scanf("%c", &a);

    a >= 'a' && a <= 'z' ? printf("%c is a Alphabet.\n", a) : printf("%c is not a Alphabet.\n", a);
    a >= 'A' && a <= 'Z' ? printf("%c is a Alphabet.\n", a) : printf("%c is not a Alphabet.\n", a);
}