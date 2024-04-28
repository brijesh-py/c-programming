#include <stdio.h>

int product(int a, int b)
{
    return a * b;
}

void main()
{
    printf("Multiply of two Numbers\n");
    int a, b;
    int (*fn)(int, int) = &product;

    printf("Enter first Number: ");
    scanf("%d", &a);

    printf("Enter first Number: ");
    scanf("%d", &b);

    printf("(*fn)(%i, %i) = %i\n", a, b, (*fn)(a, b));

    return;
}