#include <stdio.h>

void main()
{
    int num1, num2, sum;

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    // (float) sum // cat operator
    printf("Ths sum of two numbers: %f", (float)sum);
    return;
}