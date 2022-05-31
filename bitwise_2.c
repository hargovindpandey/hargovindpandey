// C program to get the nth bit of a number
#include <stdio.h>

int main()
{
    int num, n,s;
    printf("Enter any number: ");
    scanf("%d", &num);
    printf("Enter bit to check : ");
    scanf("%d", &n);
    s = (num >> n) & 1;

    printf("The %d bit is set to %d", n,s);

    return 0;
}