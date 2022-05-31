//Program to concatenate two strings.
#include <stdio.h>
int main(){
    char str1[40]="Hello world";
    char str2[40]=" Happy birthday";
    int i=0;
    while (str1[i]!='\0')
    {
        i++;
    }
    int j=0;
    while (str2[j]!='\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
    printf("%s",str1);
    return 0;
}
