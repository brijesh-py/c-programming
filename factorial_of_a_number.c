#include <stdio.h>

int main()
{
    // Write a program to calculate the factorial of a given number.
    printf("calculate the factorial of a given number. \n");
    int number, result = 1;

    printf("Enter number: ");
    scanf("%d", &number);

 /* The code snippet you provided is a for loop that calculates the factorial of a given number. Here's
 a breakdown of what it does: */
    for (int x = 1; x <= number; x++)
    {
        result = x * result;
    }

    printf("\n factorial of a given number is: %d", result);

    return 0;
}