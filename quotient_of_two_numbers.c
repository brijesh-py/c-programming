#include <stdio.h>

int main()
{
    printf("Quotient of Two Numbers \n");
    float num1, num2, result;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    result = num1 / num2;
    printf("Quotient is: %.2f", result);

    return 0;
}