#include <stdio.h>

int main()
{
    printf("Difference of Two Numbers\n");
    int num1, num2, result;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    result = num1 - num2;
    if (result >= 0)
    {
        printf("Difference is: %d", result);
    }
    else
    {
        printf("Difference is: %d", num2 - num1);
    }

    return 0;
}