#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    if (num1 > num2)
    {
        printf("%d is largest number", num1);
    }
    else
    {
        printf("%d is largest number", num2);
    }
    return;
}