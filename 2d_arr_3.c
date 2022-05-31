//Program to interchange diagonals of a matrix.
#include <stdio.h>
int main(){
    int n,i,j,t;
+    printf("enter the size of matrix ");
    scanf("%d",&n);
    int arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&arr[i][j]);
        }  
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if ((i+j)==(n-1))
            {
                t = arr[i][i];
                arr[i][i] = arr[i][j];
                arr[i][j] = t; 
            } 
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    } 
    return 0;
}