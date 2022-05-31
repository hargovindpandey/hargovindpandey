//Program to remove all duplicate character from string
#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "hello world i am rahul kumar";
    int len = strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = i+1; str[j]!='\0'; j++)
        {
            if (str[j]!=' ') 
            {
                if (str[i]==str[j])
                {
                    for (int k = j; k < str[k]!='\0'; k++)
                    {
                        str[k] = str[k+1];   
                    }   
                }
            }   
        }
    }
    printf("%s",str);
    return 0;
}
