#include <stdio.h>

void main()
{
    printf("Bitwise Operator \n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Bitwise AND operator: %d \n", num1 & num2);
    printf("Bitwise OR operator: %d \n", num1 | num2);
    printf("Bitwise XOR operator: %d \n", num1 ^ num2);
    printf("Bitwise NOT operator: %d \n", ~num1);

    return;
}