#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    printf("Print product of digits of any number\n");
    int number, product = 1, remainder;

    printf("Enter any number: ");
    scanf("%d", &number);

    while (number > 0)
    {
        remainder = number % 10;
        product = product * remainder;
        number = number / 10;
    }
    printf("Product of the digits of the given  number: %d", product);
    // getch();
    return;
}