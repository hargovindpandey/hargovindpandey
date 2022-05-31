//Program to put even and odd elements of array in two separate array.
#include <stdio.h>
int main(){
	int arr[]={2,6,23,45,12,2,21,22,98,85};
	int i,j,k,size=10,teven=0,todd=0;
	int even[size];
	int odd[size];
	for (i = 0; i < size; i++)
	{
		if (arr[i]%2==0)
		{
			even[teven] = arr[i];
			teven++;
		}
		else if (arr[i]%2!=0)
		{
			odd[todd] = arr[i];
			todd++;
		}
	}
	for (i = 0; i < teven; i++)
	{
		printf("%d ",even[i]);
	}
	printf("\n");
	for (i = 0; i < todd; i++)
	{
		printf("%d ",odd[i]);
	}
	return 0;
}
