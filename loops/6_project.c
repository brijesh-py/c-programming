#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    printf("Print sum of digits of any number\n");
    int number, sum = 0, remainder;

    printf("Enter any number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    printf("Sum of the digits of the given  number: %d", sum);
    // getch();
    return;
}