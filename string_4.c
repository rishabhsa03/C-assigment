// WACP to find that given word is in uppercase or in lowercase
#include <stdio.h>
int main(){
    char ch;
    printf("enter the word ");
    scanf("%c",&ch);
    if (ch<=122 && ch>=97){
        printf("word is lowercase");
    }
    else if (ch<=90 && ch>=65){
        printf("word is uppercase");
    }
    else{
        printf("please enter only letter");
    }
    return 0;
}