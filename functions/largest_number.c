#include <stdio.h>
// #include <conio.h>

// WAP to find the largest number in between two numbers by using function

int findLargestNumber(int number1, int number2);

void main()
{
    // clrscr();
    printf("The Largest Number\n");
    int number1, number2, largestNumber;

    printf("Enter 1st Number: ");
    scanf("%d", &number1);
    printf("Enter 2nd Number: ");
    scanf("%d", &number2);

    largestNumber = findLargestNumber(number1, number2);
    printf("The Largest Number is %d", largestNumber);

    return;
}

int findLargestNumber(int number1, int number2)
{
    if (number1 > number2)
        return number1;
    else
        return number2;
}