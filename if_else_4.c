// Program to check uppercase or lowercase alphabets
#include<stdio.h>
int main(){
    char c;
    printf("Enter your character\n");
    scanf("%c",&c);
    if(c>='A' && c<='Z'){
        printf("%c is in uppercase",c);
    }
    else if(c>='a' && c<='z'){
        printf("%c is in lowercase",c);
        
    }
    else{
        printf("It is not alphabet");
    }
    return 0;
}
    