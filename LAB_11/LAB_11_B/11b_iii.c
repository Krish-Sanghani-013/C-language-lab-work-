#include<stdio.h>
void main(){
    char ch;

    for(char ch = 'a'; ch <= 'z'; ch++){
        printf("The ASCII value of %c is %d\n", ch, ch);
    }
    
    for (char ch = 'A'; ch <= 'Z'; ch++){
        printf("The ASCII value of %c is %d\n", ch, ch);
    }
}