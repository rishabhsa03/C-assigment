#include <stdio.h>
// printing table using do while loop
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