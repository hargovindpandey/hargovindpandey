//Program to change the value of the variable to ten time to its current value using call by reference
#include <stdio.h>
void func(int *x){
    *x = *x*10;
}
int main(){
    int a=65;
    printf("value before function is %d\n",a);
    func(&a);
    printf("value after function is %d\n",a);
    return 0;
}