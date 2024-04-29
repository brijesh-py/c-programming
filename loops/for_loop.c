#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    int number, i = 1, table;
    
    printf("Enter any number: ");
    scanf("%d", &number);

    for (i; i <= 10; i++)
    {
        table = number * i;
        printf("%d * %d = %d\n", number, i, table);
    }
    // getch();
    return;
}