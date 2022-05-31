// Program to find second largest number in an array
#include <stdio.h>
int main(){
    int n;
    printf("Enter array size:");
    scanf("%d",&n);
    int arr[n],i,max=0,sec=0;
    printf("Enter Elements\n");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]>max){
            sec=max;
            max=arr[i];
        }
        else if(arr[i]>sec && arr[i]<max){
            sec=arr[i];
        }
    }
    printf("Second largest number is %d",sec);
    return 0;
}