/*
1. Header file
2. Pre-processor directive
3. Library
4. Module
*/
#include <stdio.h>

void main()
{
    printf("Conditional Statements");
    /*
    if(<condition>)
    {
        // run this block of code if condition is true
    }
    */
   
    // Single if statement
    printf("\nSingle Statement");
    int number;

    printf("\nEnter Any Number: ");
    scanf("%d", &number);

    // is odd number
    if (number % 2 != 0)
    {
        printf("\nYes, %d is Odd number.", number);
    }

    // is even number
    if (number % 2 == 0)
    {
        printf("\nYes, %d is Even number.", number);
    }

    // you can don't use {}
    // syntax
    if (number % 2 == 0)
        printf("\nYes, %d is Even number.", number);
    if (number % 2 != 0)
        printf("\nYes, %d is Odd number.", number);

    return;
}
