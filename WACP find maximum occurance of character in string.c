#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "helloworldiamyashpalssingh";
    int fre[255];
    int i=0,ass;
    for(i=0;i<255;i++)
    {
        fre[i] = 0;
    }
    i=0;
    while (str[i]!='\0')
    {
        ass = (int)str[i];
        fre[ass]+=1;
        i++;
    }
    int m=0;
    for (i = 0; i < 255; i++)
    {
        if (fre[i]>fre[m])
        {
            m=i;
        }  
    }
    printf("%c occur %d time",m,fre[m]);
    return 0;
}
