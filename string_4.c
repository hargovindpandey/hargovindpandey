//Program to remove all occurrences of a character from string.

#include <stdio.h>
int main(){
    char str[] = "hello world happy coding in c.";
    int len=0;
    char c;
    printf("enter: ");
    scanf("%c",&c);
    while (str[len]!='\0')
    {
        len++;
    }
    int lst = len-1;
    int i=0;
    while (str[i]!='\0')
    {
        if (c==str[i])
        {
            int j=i;
            while (j<lst)
            {
                str[j] = str[j+1];
                j++;
            }
            str[lst] = '\0';    
        }
        i++;   
    }
    printf("%s",str);
    return 0;
}
