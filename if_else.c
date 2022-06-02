//1
// to check a number divisible by 5 or 11 
# include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if(n%5==0){
        printf("the number is divisible by 5");
    }
    else if (n%11==0){
        printf("the number is divisible by 11");
    }
    else{
        printf("not divisible by 5 or 11 ");
    }
    return 0;
}
// 2
