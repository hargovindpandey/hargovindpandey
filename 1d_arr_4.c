// Program to find reverse of an array.
#include <stdio.h>
int rev(int *arr,int n){
    int t;
    for (int i = 0; i < n/2; i++)
    {
        t = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = t;
    }
}
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int i,j,n=9;
    rev(arr,n);
	for (i = 0; i<n ; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}