//WAP to input an array of N number of elements and find the sum and average of all the elements of that array.
#include <stdio.h>
#include <string.h>

int main(){
    int n;
    printf("enter size of array: ");
    scanf("%d",&n);
    int arr[n],i,sum=0,av=0;
    printf("Enter elements in array\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        sum=sum+arr[i];
    }
    printf("Sum: %d\n",sum);
    av=sum/n;
    printf("Average: %d\n",av);
 return 0;   
}
