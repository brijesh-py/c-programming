#include <stdio.h>

void main()
{
    // variable declaration
    int num1, num2;
    char operator;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);

    printf("Select Operator(+, -, * and/): ");
    scanf(" %c", &operator);

    if (operator== '+')
    {
        printf("%d + %d = %d", num1, num2, num1 + num2);
    }
    else if (operator== '-')
    {
        printf("%d - %d = %d", num1, num2, num1 - num2);
    }
    else if (operator== '*')
    {
        printf("%d * %d = %d", num1, num2, num1 * num2);
    }
    else if (operator== '/')
    {
        printf("%d / %d = %d", num1, num2, num1 / num2);
    }
    else
    {
        printf("Please Selector Correct Operator");
    }
}
