//Program using function which calculate the sum and average of two number use pointer and print the value of sum and average
#include <stdio.h>
void sa(int x,int y, int *sum,int *ave){
    *sum = x+y;
    *ave = (x+y)/2;
}
int main(){
    int a,b,sum,ave;
    a = 4;
    b = 4;
    sa(a,b, &sum,&ave);
    printf("the sum of two number is %d",sum);
    printf("the average of two number is %d",ave);
    return 0;
}