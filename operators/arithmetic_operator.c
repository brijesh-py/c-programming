#include <stdio.h>

void main()
{
    printf("Arithmetic Operator \n");
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = num1 + num2;
    printf("\nSum of two numbers is: %d", result);

    result = num1 - num2;
    printf("\nDifference of two numbers is: %d", result);

    result = num1 * num2;
    printf("\nProduct of two numbers is: %d", result);

    result = num1 / num2;
    printf("\nQuotient of two numbers is: %d", result);

    result = num1 % num2;
    printf("\nRemainder of two numbers is: %d", result);

    result = ++num1;
    printf("\nIncrement of two numbers is: %d", num1++);

    result = --num2;
    printf("\nDecrement of two numbers is: %d", result);

    return;
}