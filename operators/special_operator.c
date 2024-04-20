#include <stdio.h>

void main()
{
    printf("Special Operator \n");
    int number;
    printf("Enter first number: ");
    scanf("%d", &number);


    // sizeof();
    printf("Size of variable in memory: %d", sizeof(number));

    // &;
    printf("\nAddress of variable: %d", &number);

    // *;
    printf("\nValue of variable: %p", *(&number));

    return;
}