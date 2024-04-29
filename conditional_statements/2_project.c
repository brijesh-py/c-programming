#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    printf("Leap year by nesting if-else\n");
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);

    if (year % 100 == 0)
  
        if (year % 400 == 0)
            printf("Given year is leap year.");
        else
            printf("Given year is not leap year.");
    
    else
        if (year % 4 == 0)
            printf("Given year is leap year.");
        else
            printf("Given year is not leap year.");
    
    // getch();
    return;
}