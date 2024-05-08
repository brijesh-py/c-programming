#include <stdio.h>
// #include <conio.h>

// WAP to perform all arithmetic operations to using switch statement
void main()
{
    // clrscr();
    printf("Arithmetic Operations\n");
    int num1, num2;
    float result;
    char operator;

    // input operation
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("Select Operator (+, -, * and /):");
    scanf(" %c", &operator);

    // condition statement
    switch (operator)
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
        num2 != 0 ? result = ((float)num1 / num2) : printf("Division by zero is undefined\n");
        break;
    default:
        printf("Please Select Operator(+, -, * and /)");
    }
    printf("Result %d %c %d = %.2f", num1, operator, num2, result);

    return;
}