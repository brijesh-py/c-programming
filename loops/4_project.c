#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    printf("Print name 10 times\n");
    int i = 1;
    char name[] = "Mira";
    
    while (i <= 10)
    {
        printf("%s\n", name);
        i++;
    }
    // getch();
    return;
}