//Program to swap two number using pointer
#include <stdio.h>
void swap(int *a,int *b);
int main(){
    int a=3,b=4,n;
    printf("the value of a is %d and b is %d\n",a,b);
    swap(&a,&b);
    printf("the value after a is %d and b is %d",a,b);
    return 0;
}
void swap(int *a,int *b){
    int c;
    c = *a;
    *a = *b;
    *b = c;
}