#include <stdio.h>
// #include <conio.h>

int add(int number1, int number2); // declaration function

void main()
{
    // clrscr();
    printf("Sum to Two numbers\n");
    int number1, number2, result;

    printf("Enter 1st Number: ");
    scanf("%d", &number1);
    printf("Enter 2nd Number: ");
    scanf("%d", &number2);

    result = add(number1, number2); // calling function
    printf("The Sum of two numbers: %d", result);
    return;
}

int add(int number1, int number2) // definition function
{
    return number1 + number2;
}