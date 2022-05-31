//Program to reverse order of words in a given string.
#include <stdio.h>
#include <string.h>
int main(){
    char str[] = "Happy coding ,hello friends";
    char revst[40];
    int len,ws,we,j,i;
    len = strlen(str);
    ws = len-1;
    we = len-1;
    j=0;
    while (ws>0)
    {
        if (str[ws]==' ')
        {
            i = ws+1;
            while (i<=we)
            {
                revst[j] = str[i];
                i++;
                j++;
            }
            revst[j++] = ' ';
            we = ws-1;
        }
        ws--;
    }
    for (int p = 0; p <=we; p++)
    {
        revst[j] = str[p];
        j++;
    }
    printf("%s",revst);
    return 0;
}