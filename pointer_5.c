//Program to verify that vaiable pass by a call by value is not change the main variable.
#include <stdio.h>
int sum(int a,int b){
    b = 5;
    a = 45;
}
int main(){
    int x,y;
    x = 4;
    y = 6;
    printf("%u\n",&x);
    printf("%u\n",&y);
    printf("x = %d y = %d\n",x,y);
    sum(x,y);
    printf("x = %d y = %d\n",x,y);
    return 0;
}