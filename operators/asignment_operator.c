#include <stdio.h>

void main()
{
    printf("Assignment Operator \n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    num1 += num2;
    printf("\nSum of two numbers is: %d", num1);

    num1 -= num2;
    printf("\nDifference of two numbers is: %d", num1);

    num1 *= num2;
    printf("\nProduct of two numbers is: %d", num1);

    num1 /= num2;
    printf("\nQuotient of two numbers is: %d", num1);

    num1 %= num2;
    printf("\nRemainder of two numbers is: %d", num1);

    num1 &= num2;
    printf("\nBitwise AND of two numbers is: %d", num1);

    num1 |= num2;
    printf("\nBitwise OR of two numbers is: %d", num1);

    num1 ^= num2;
    printf("\nBitwise XOR of two numbers is: %d", num1);

    num1 <<= num2;
    printf("\nBitwise Left Shift of two numbers is: %d", num1);

    num1 >>= num2;
    printf("\nBitwise Right Shift of two numbers is: %d", num1);

    return;
}