//Program to find the character between two number
#include <stdio.h>
void slice(char *str,int m,int n){
    int i=0;
    int a,b;
    a = m;
    b = n-1;
    while ((a+i)<b)
    {
        str[i] = str[a+i];
        i++;
    }
    str[i] = '\0';  
}
int main(){
    char str[] = "harry";
    slice(str,2,4);
    printf("%s",str);
    return 0;
