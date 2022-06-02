// C program to print natural numbers in reverse from n to 1
#include <stdio.h>

int main()
{
    int i, s;
    printf("Enter starting value: ");
    scanf("%d", &s);
    for(i=s; i>=1; i--)
    {
        printf("%d\n", i);
    }
    return 0;
}