//Program to find sum of each row and column of a matrix.
#include <stdio.h>
int main(){
    int a=0,b=0,i,j,n,m;
    printf("enter the size of the matrix ");
    scanf("%d",&n);
    scanf("%d",&m);
    int arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            a = a+arr[i][j];
        }
        printf("the sum of column %d is %d\n",j+1,a);
        a=0;
    }
    a=0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            a = a+arr[i][j];
        }
        printf("the sum of row %d is %d\n",i+1,a);
        a=0;
    }   
    return 0;
}