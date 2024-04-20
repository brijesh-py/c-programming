#include <stdio.h>

void main()
{
    printf("Logical Operator \n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Logical AND operator: %d \n", num1 && num2);
    printf("Logical OR operator: %d \n", num1 || num2);
    printf("Logical NOT operator: %d \n", !num1);

    return;
}