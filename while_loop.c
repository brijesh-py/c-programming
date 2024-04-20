#include <stdio.h>

void main()
{
    // while loop is used to repeat a block of code as long as a certain condition is true

    // syntax
    // while (<condition>){
    //     // block of code to be executed
    // }

    int i = 1;

    /* The code snippet `while (i <= 10) { printf("%d ", i); i++; }` is a while loop in C programming.
    It is iterating over the values of variable `i` starting from 1 and printing each value until `i`
    reaches or exceeds 10. */
    // Increment
    printf("\nIncrement\n");
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }

    // Decrement
    printf("\nDecrement\n");
    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }
}