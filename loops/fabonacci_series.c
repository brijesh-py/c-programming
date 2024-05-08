#include <stdio.h>
// #include <conio.h>

void main()
{
    // clrscr();
    printf("Fibonacci Series\n");
    int number, first = 0, second = 1, next;
    printf("Enter number of the term: ");
    scanf("%d", &number);
    printf("Fibonacci Series up to %d terms:\n", number);

    for (int i = 0; i < number; i++)
    {
        if (i <= 1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    // getch();

    return;
}