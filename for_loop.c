#include <stdio.h>

void main()
{
    // for loop is used to repeat a block of code a certain number of times

    // syntax
    // for (<initialization>; <condition>; <increment/decrement>){
    //     // block of code to be executed
    // }

    int i = 1;

    /* The code snippet `for (i = 1; i <= 10; i++) { printf("%d ", i); }` is a for loop in C programming.
    It is iterating over the values of variable `i` starting from 1 and printing each value until `i`
    reaches or exceeds 10. */
    // Incrementing
    printf("Incrementing\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }

    // Decrementing
    printf("\n");
    printf("Decrementing\n");
    for (i = 10; i >= 1; i--)
    {
        printf("%d ", i);
    }

    // table of 5
    printf("\n");
    printf("Table of 5\n");
    for (i = 1; i <= 10; i++)
    {
        printf("%d * 5 = %d\n", i, i * 5);
    }

    // break and continue
    printf("\n");
    printf("Break and Continue\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            break;
        }
        printf("%d ", i);
    }

    printf("\n");
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            // skip the rest of the loop
            continue;
        }
        printf("%d ", i);
    }
}