#include <stdio.h>

int main()
{
    printf("Sum of two numbers \n");
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = num1 + num2;
    printf("Result is: %.2f +  %.2f = %.2f", num1, num2, num1 + num2);

    return 0;
}