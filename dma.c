// program to resize the array and input element.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *ptr,i,n,l;
    printf("enter size of array");
    scanf("%d",&l);
    ptr = (int*)calloc(l,sizeof(int));
    for (i = 0; i < l; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (i = 0; i < l; i++)
    {
        printf("the value of %d is %d",i,ptr[i]);
    }
    printf("enter new size of array");
    scanf("%d",&n);
    ptr = (int*)realloc(ptr,n*sizeof(int));
    for (i = 0; i < n; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("the value of %d is %d",i,ptr[i]);
    }
    return 0;
}