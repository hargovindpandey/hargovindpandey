//Program to encript or decript the string 
#include <stdio.h>
void encript(char *str1){
    char *ptr=str1;
    while(*ptr!='\0')
    {
        *ptr = *ptr+9;
        ptr++;
    }   
}
void dencrypt(char *str1){
    char *ptr=str1;
    while (*ptr!='\0')
    {
        *ptr = *ptr-9;
        ptr++;
    }  
}
int main(){
    char n;
    char str1[]="Happy Coding";
    encript(str1);
    printf("your encrypted data is-\n");
    printf("%s\n",str1);
    printf("If you want to dencrypt data then press y for decrypt n for still encrypted-\n");
    scanf("%c",&n);
    if (n=='y')
    {
        dencrypt(str1);
        printf("%s",str1);
    }
    else{
        printf("thank you");
    }
    return 0;
}
