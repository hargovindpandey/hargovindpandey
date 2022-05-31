//Program to count duplicate element in an array
#include <stdio.h>
int main(){
	int arr[1000];
	int fre[1000];
	int i,j,num,c=0,size=10,sum=0;
	printf("enter the number one by one ");
	for (i = 0; i < size; i++)
	{
		scanf("%d",&arr[i]);
	}
	for (i = 0; i < size; i++)
	{
		c = 1;
		if (arr[i]!=-7)  
		{
			for (j = i+1; j < size; j++)
			{
				if (arr[i]==arr[j])
				{
					c++;
					arr[j] = -7;
				}
			}	
			fre[i] = c;
		}
	}
	printf("These are duplicate element-\n");
	for (i = 0; i < size; i++)
	{
		if (fre[i]>1)
		{
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}