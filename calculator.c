#include <stdio.h>

void main()
{
    int num1, num2;
    char op;
    printf("Enter first Number: ");
    scanf("%d", &num1);
    printf("Enter second Number: ");
    scanf("%d", &num2);
    printf("Select Operator(+, -, * and/): ");
    scanf(" %c", &op);
    if (op == '+')
    {
        printf("%d + %d = %d", num1, num2, num1 + num2);
    }
    else if (op == '-')
    {
        printf("%d - %d = %d", num1, num2, num1 - num2);
    }
    else if (op == '*')
    {
        printf("%d * %d = %d", num1, num2, num1 * num2);
    }
    else if (op == '/')
    {
        printf("%d / %d = %d", num1, num2, num1 / num2);
    }
    else
    {
        printf("Please Selector Correct Operator");
    }
}
