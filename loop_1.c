// Program to print Fibonacci series
#include <stdio.h>
int main(){
    int a,b,c=0,i,n;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    a=0;
    b=1;
    for (i=1;i<=n;i++){
        printf("%d, ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}