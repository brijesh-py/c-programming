#include <stdio.h>

int main()
{
    printf("Remainder of Two Numbers \n");
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = num1 % num2;
    printf("Remainder is : %d", result);

    return 0;
}