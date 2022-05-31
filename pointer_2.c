//Program to print the value of i using pointer to pointer type of variable.
#include <stdio.h>
int main(){
    int i=54;
    int *j = &i;
    int **k = &j;
    printf("%u\n",**k);
    printf("%u\n",*&i);
    return 0;
