//Program to find maximum and minimum between two numbers using functions.
#include <stdio.h>
int num(int x,int y);
int main(){
    int a,b,n;
    printf("enter ");
    scanf("%d %d",&a,&b);
    n = num(a,b);
    return 0;
}
int num(int x,int y){
    if (x>y){
        printf("%d is greater",x);
    }
    else{
        printf("%d is greater",y);
    }
}


