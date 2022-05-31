#include <stdio.h>
int main() {
    int n,i;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (i = 1; i<=10; i++)
    {
        printf("%d*%d=%d\n",n,i,i*n);
    }
    return 0;
}


#include <stdio.h>
int main(){
    int i,n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    i = 1;
    while (i<=10)
    {
        printf("%d * %d = %d\n",n,i,i*n);
        i++;
    }
    
    return 0;
}


#include <stdio.h>
int main(){
    int i,n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    i = 1;
    do
    {
      printf("%d * %d = %d\n",n,i,i*n);
      i++;
    } while (i<=10);
  return 0;
}
