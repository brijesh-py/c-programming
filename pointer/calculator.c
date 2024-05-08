#include <stdio.h>

void calculateValue(int *ptr1, int *ptr2, char *operator, int * result);

void main()
{
    printf("Calculator using Pointer\n");
    int number1, number2, result;
    char operator;

    printf("Enter 1st Number: ");
    scanf("%d", &number1);
    printf("Enter 2nd Number: ");
    scanf("%d", &number2);
    printf("Choose operator (+, -, *, / and %): ");
    scanf(" %c", &operator);

    calculateValue(&number1, &number2, &operator, & result);

    printf("Result is %d %c %d = %d", number1, operator, number2, result);

    return;
}

void calculateValue(int *ptr1, int *ptr2, char *operator, int * result)
{
    switch (*operator)
    {
    case '+':
        *result = *ptr1 + *ptr2;
        break;
    case '-':
        *result = *ptr1 - *ptr2;
        break;
    case '*':
        *result = *ptr1 * *ptr2;
        break;
    case '/':
        *result = *ptr1 / *ptr2;
        break;
    case '%':
        *result = *ptr1 % *ptr2;
        break;
    }
}