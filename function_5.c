//Program to print all strong number between 1 to n using function
#include <stdio.h>
int strong(int x,int y);
int main(){
    int a,n,b,i,j;
    printf("enter 1st limit ");
    scanf("%d",&a);
    printf("enter 2nd limit ");
    scanf("%d",&b);
    strong(a,b);

    return 0;
}
int strong(int x,int y){
    int i,f,lst,n1,n2,j,fac;
    for (i = x; i <= y; i++)
    {
        n1 = i;
        fac = 0;
        while (n1>0)
        {
            int s = 1;
            lst = n1%10;
            for (j = 1; j<=lst;j++)
            {
                s = s*j;
            }
            fac = fac + s;
            n1 = n1/10;
        }
        if (i==fac)
        {
            printf("%d is strong\n",i);
        }
    }
}
