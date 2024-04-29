#include <stdio.h>
// #include <conio.h> // for turbo c++

void main()
{
    // clrscr();
    printf("The largest number from three numbers\n");
    int num1, num2, num3;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);

    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is the largest number", num1);
        }
        else
        {
            printf("%d is the largest number", num3);
        }
    }
    else
    {
        if (num2 > num3)
        {
            printf("%d is the largest number", num2);
        }
        else
        {
            printf("%d is the largest number", num3);
        }
    }
    // getch();
    return;
}