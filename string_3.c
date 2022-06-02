// WACP to count occurrences of a character in given string
#include <stdio.h>
#include <string.h>
int find(char *str,char p){
    int i=0,j=0;
    while (str[i]!='\0')
    {
        if (p==str[i])
        {
            j++;
        }
        i++; 
    }
    return j;
}
int main(){
    char str[] = "I PLAY fortnite";
    char p;
    printf("enter character ");
    scanf("%c",&p);
    int c=find(str,p);
    if (c==0)
    {
        printf("%c not found ",p);
    }
    else{
        printf("%c found total %d time",p,c);
    }
    return 0;
}