//Program using function to calculate area of square
#include <stdio.h>
int area(int a);
int main(){
    int a,s,sq;
    printf("enter the side of the square ");
    scanf("%d",&s);
    sq = area(s);
    printf("area of square is %d",sq);
    return 0;
}
int area(int a){
    int ar;
    return a*a;
}
