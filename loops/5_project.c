#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    printf("Print numbers from 100 to 1.\n");
    int number = 100;

    while (number >= 1)
    {
        printf("%d\t", number);
        number--;
    }
    // getch();
    return;
}