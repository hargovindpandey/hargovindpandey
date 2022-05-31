//Program using function to calculate average of three number
#include <stdio.h>
int average(int a,int b,int c);
int main(){
    int n,i,j,k,ave;
    printf("enter 1st 2nd and 3rd number ");
    scanf("%d %d %d",&i,&j,&k);
    ave = average(i,j,k);
    printf("the average of three number is %d",ave);
    return 0;
}
int average(int a,int b,int c){
    int t;
    t = (a+b+c)/3;
    return t;
}
