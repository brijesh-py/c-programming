#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    printf("Print the numbers from 1 to 100.\n");
    int number = 1;
    while (number <= 100)
    {
        printf("%d\t", number);
        number++;
    }
    // getch();
    return;
}