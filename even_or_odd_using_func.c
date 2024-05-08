#include <stdio.h>
// #include <conio.h>

// WAP to find the given number is even or odd by using function

void checkEvenOrOdd(int number); // declaration of function

void main()
{
    // clrscr();
    printf("Even or Odd\n");
    int number;
    printf("Enter any Number: ");
    scanf("%d", &number);
    checkEvenOrOdd(number);

    return;
}
// check even or odd number
void checkEvenOrOdd(int number)
{
    if (number % 2 == 0)
        printf("Given number is Even.");
    else
        printf("Given number is Odd.");
}