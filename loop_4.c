//C program to print diamond star pattern 
#include <stdio.h>

int main()
{
    int i, j, rows;
    int t, s;
   
    printf("Enter rows to print : ");
    scanf("%d", &rows);
    
    
    t = 1;
    s = rows - 1;
    for(i=1; i<rows*2; i++)
    {
        for(j=1; j<=s; j++)
            printf(" ");
        for(j=1; j<t*2; j++)
            printf("*");
        printf("\n");
        
        if(i<rows)
        {
            s--;
            t++;
        }
        else
        {
            s++;
            t--;
        }
    }
    
    return 0;
}