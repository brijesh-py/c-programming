#include <stdio.h>
unsigned long int factorial(long int number)
{
    if (number == 0)
        return 0;
    else if (number == 1)
        return 1;
    else
        return number * factorial(number - 1); // recursive function
}

void main()
{
    printf("Function Recursive\n");

   unsigned int number;
    printf("Enter any number: ");
    scanf("%d", &number);

    printf("Factorial of %d is: %lu\n", number, factorial(number));

    return;
}