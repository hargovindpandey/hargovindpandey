//Program to print number of days in month
#include<stdio.h>
int main(){
    int m,i;
    int mon[]={1,3,5,7,8,10,12};
    int bn[]={2,4,6,9,11};
    printf("Enter the month\n");
    scanf("%d",&m);
    for(i=0;mon[i];i++){
        if(m==mon[i]){
            printf("Month: 31 days");
            break;
        }
        else if(m==2){
            printf("Month: 28/29 days");
            break;
        }
        else if(m==bn[i]){
            printf("Month : 30 days");
            break;
        }

    }
    return 0;
}
    