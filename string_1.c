//Program to find first occurrence of a word in a given string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100] = "hello ram sunfg daugthaerwe";
    char c[100];
    printf("enter the character");
    scanf("%s",&c);
    int i=0,p=0;
    while (str[i]!='\0')
    {
        if (str[i]==c[0])
        {
            p=1;
            for(int j=0;c[j];j++)
            {
                if(str[i+j]!= c[j]){
                    p=0;
                    break;
                }
            }
        }
        if (p==1)
        {
            break;
        }
        i++;
    }
    if (p==1)
    {
        printf("word %s found at %d index",c,i);
    }
    else{
        printf("word not found");
    }
    return 0;
}