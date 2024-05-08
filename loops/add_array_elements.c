#include <stdio.h>
// #include <conio.h>
//  WAP to add elements of an array.

void main()
{
    // clrscr();
    printf("Sum of Array elements\n");
    int numArray[5] = {1, 2, 3, 4, 5}, sum = 0, sizeOfArray;
    sizeOfArray = sizeof(numArray) / sizeof(numArray[0]);

    printf("Array elements: ");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("%d ", numArray[i]);
    }

    for (int i = 0; i < sizeOfArray; i++)
    {
        sum = sum + numArray[i];
    }
    printf("\nSum of Array elements is : %d", sum);
    return;
}