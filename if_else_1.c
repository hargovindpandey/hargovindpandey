//C program to check whether a character is alphabet, digit or special character
#include <stdio.h>
int main(){
    char n;
    printf("Enter your character\n");
    scanf("%c",&n);
    if(n>='A' && n<='Z' || n>='a' && n<='z'){
        printf("%c is alphabet",n);
    }
    else if(n>='0' && n<='9'){
        printf("%c is digit",n);
    }
    else{
        printf("%c is special character",n);
    }
    return 0;
}