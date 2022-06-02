// WACP to check wheather a vowel or consonent
#include <stdio.h>
int main(){
    char w;
    printf("enter the character ");
    scanf("%c",&w);
        switch (w)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("you enter a vowel");
            break;
        default:
            printf("you enter a consonent");
            break;
        }
    return 0;
}