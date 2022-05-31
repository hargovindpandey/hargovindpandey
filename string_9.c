//Program to code of strcpy function
#include <stdio.h>
void strcp(char *str1,char *str2){
    char *ptr=str1;
    int i=0;
    while(*ptr!='\0')
    {
        str2[i] = str1[i];
        ptr++;
        i++;
    }   
}
int main(){
    char str1[]="Happy birthday";
    char str2[20];
    strcp(str1,str2);
    printf("%s",str2);
    return 0;
}