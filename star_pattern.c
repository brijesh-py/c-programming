#include <stdio.h>
// #include <conio.h>

void main()
{
    // clrscr();
    printf("Start Pattern\n");
    int number = 5;
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return;
}