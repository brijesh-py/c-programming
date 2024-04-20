#include <stdio.h>

void main()
{
    printf("Comparision Operator \n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Equal to operator: %d \n", num1 == num2);
    printf("Not equal to operator: %d \n", num1 != num2);
    printf("Greater than operator: %d \n", num1 > num2);
    printf("Less than operator: %d \n", num1 < num2);
    printf("Greater than or equal to operator: %d \n", num1 >= num2);
    printf("Less than or equal to operator: %d \n", num1 <= num2);

    return;
}