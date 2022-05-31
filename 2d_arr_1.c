//Program to input a 2d array and display it using function
#include <stdio.h>
#define a 3
#define b 4
int dis(int arr[a][b]);
int main(){
    int arr[a][b];
    int i,j,n;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            printf("enter the mark of %d student \n",i+1);
            scanf("%d",&arr[i][j]);
        }
    }
    dis(arr);
    return 0;
}
int dis(int arr[a][b]){
    for (int k = 0; k < a; k++)
    {
        for (int l = 0; l < b; l++)
        {
            printf("the mark is %d",arr[k][l]);
        }   
    }  
}
