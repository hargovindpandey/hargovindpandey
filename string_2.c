//Program to remove first occurrence of a word from string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[100] = "hello world new language is c.";
    char c[100];
    int j,k,i;
    printf("enter the character");
    scanf("%s",&c);
    int temp,p;
    int len=strlen(c);
    int l = strlen(str);
    while (str[i]!='\0')
    {
        temp = i;
        for (j = 0;c[j]; j++)
        {
            if (str[i]==c[j])
            {
                i++;
            }
        }
        p=i-temp;
        if (p==len)
        {
            for (k=temp; k < l; k++)
            {
                str[k] = str[k+len+1]; 
            }
            break;
        }
        i = temp;
        i++;
    }
    printf("%s",str);
    return 0;
}