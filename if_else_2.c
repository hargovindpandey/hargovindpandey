//C program to check whether triangle is equilateral, scalene or isosceles
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter sides of triangle\n");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if (a==b==c){
        printf("It is an equilateral triangle");
    }
    else if(a==b || b==c || a==c){
        printf("It is an isosceles triangle");
        
    }
    else{
        printf("It is an scalene triangle");
    }
    return 0;
}