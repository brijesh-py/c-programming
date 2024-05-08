#include <stdio.h>
// #include <conio.h>

// WAP to take input values into an array and display then.

void main()
{
    // clrscr();
    printf("Take Input an Array and Display\n");
    int numArray[5], sizeArray;
    sizeArray = sizeof(numArray) / sizeof(numArray[0]);

    printf("Enter continues %d values\n", sizeArray);
    for (int i = 0; i < sizeArray; i++)
    {
        scanf("%d", &numArray[i]);
    }
    
    printf("Display Array values: ");
    for (int i = 0; i < sizeArray; i++)
    {
        printf("%d ", numArray[i]);
    }

    return;
}