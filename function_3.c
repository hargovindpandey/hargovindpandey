//Program using function to convert celcius into fahrenheit
#include <stdio.h>
int ctf(int c);
int main(){
    int n,fh;
    printf("enter temp. in celcius ");
    scanf("%d",&n);
    fh = ctf(n);
    printf("celcius to fahenheit is %d",fh);
    return 0;
}
int ctf(int c){
    int f;
    f = c*1.8+32;
    return f;
}