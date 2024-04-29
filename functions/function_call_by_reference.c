#include <stdio.h>

void swap(int *num1, int *num2)
{
    *num2 = *num1 + *num2;
    *num1 = *num2 - *num1;
    *num2 = *num2 - *num1;
}

void main()
{
    printf("Swapping number without using third variable and without using call by values");
    int num1 = 1;
    int num2 = 2;
    // call by reference
    swap(&num1, &num2);
    printf("Number one is %d and number two is %d", num1, num2);
    return;
}