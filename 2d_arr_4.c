//program to find upper triangular matrix.
#include <stdio.h>
int main()
{
    int n,i,j,a,sum=0;
    printf("enter size ");
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j<=i){
                printf("%d ",arr[i][j]);
                sum = sum+arr[i][j];
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}