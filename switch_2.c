//Program to check positive negative or zero using switch case
#include <stdio.h>
int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    switch(n>0){
        case 1:
        printf("%d is positive",n);
        break;
        case 0:
        switch( n<0){
            case 1:
            printf("%d is negative",n);
            break;
            case 0:
            printf("%d is zero",n);
            break;
        }
        break;
    }
    return 0;
}