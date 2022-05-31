// Program to calculate profit or loss
#include<stdio.h>
int main(){
    int cp,sp,d=0;
    printf("Enter cost price: ");
    scanf("%d",&cp);
    printf("Enter sell price: ");
    scanf("%d",&sp);
    if(sp>cp){
        d=sp-cp;
        printf("Profit: %d",d);
    }
    else if(cp>sp){
        d=cp-sp;
        printf("Loss: %d",d);
    }
    else if(sp==cp){
        printf("Neither profit nor loss");
    }
    return 0;
}