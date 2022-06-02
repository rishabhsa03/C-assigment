// creating a calculaotr using switch cases 
#include <stdio.h>
int main()
{
    char operator;
    float num1, num2, result=0.0f;
    printf("Enter [number 1] [+ - * /] [number 2]\n");
    scanf("%f %c %f", &num1, &operator, &num2);
    switch(operator)
    {
        case '+': 
            result = num1 + num2;
            break;

        case '-': 
            result = num1 - num2;
            break;

        case '*': 
            result = num1 * num2;
            break;

        case '/': 
            result = num1 / num2;
            break;

        default: 
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", num1, operator, num2, result);
    return 0;
}