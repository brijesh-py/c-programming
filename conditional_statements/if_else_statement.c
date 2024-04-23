#include <stdio.h>

void main()
{
    printf("if-else Statement\n");
    /*
    if(<condition>)
    {
        // run this block of code if condition is true
    }
    else
    {
        // run this block of code if condition is false, or else condition is true
    }
    */
    printf("Check number is Odd or Even?\n");
    int number;

    printf("Enter any Number: ");
    scanf("%d", &number);

    // if-else statement
    if (number % 2 == 0)
    {
        printf("\nYes, %d is Even number.", number);
    }
    else
    {
        printf("\nYes, %d is Odd number.", number);
    }

    // you can use short-hand if-else
    // syntax
    number % 2 == 0 ? printf("\nYes, %d is Even number.", number) : printf("\nYes, %d is Odd number.", number);

    return;
}