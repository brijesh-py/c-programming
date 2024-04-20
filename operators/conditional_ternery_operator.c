#include <stdio.h>

void main()
{
    printf("Turnery Operator\n");
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    /* This line of code is using the ternary operator in C. */
    // syntax
    //  condition ? expression1 : expression2
    num1 > num2 ? printf("Greater number is: %d", num1) : printf("Greater number is: %d", num2);

    return;
}