#include <stdio.h>
// #include <conio.h>
// WAP to input and display the matrix.

void main()
{
    // clrscr();
    printf("Input and Display Matrix\n");
    int numArray[9], sizeOfArray;
    sizeOfArray = sizeof(numArray) / sizeof(numArray[0]);

    printf  ("Take %d time number\n", sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        scanf("%d", &numArray[i]);
    }

    printf("Display Matrix\n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (i % 3 == 0 && i != 0)
            printf("\n");
        printf("%d ", numArray[i]);
    }

    return;
}