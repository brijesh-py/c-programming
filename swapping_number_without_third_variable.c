#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;                             
    printf("After Swapping \nnum1 = %d, num2 = %d", num1, num2);

    return;
}