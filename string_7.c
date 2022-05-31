//153 WACP to check character is present in string or not
#include <stdio.h>
int occ(char str[],char s){
    int j=0;
    for (int i = 0; i < str[i]; i++)
    {
        if (str[i]==s)
        {
            j++;
        }     
    }   
    return j;
}
int main(){
    char str[20];
    char c,s;
    printf("enter ");
    scanf("%s",&str);
    fflush(stdin);
    printf("enter the character ");
    scanf("%c",&s);
    int p = occ(str,s);
    if (p!=0)
    {
        printf("yes present");
    }
    else{
        printf("not present");
    } 
    return 0;
}
