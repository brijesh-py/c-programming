#include <stdio.h>
// #include <conio.h>

// WAP to print transpose of matrix
void main()
{
    printf("Transpose of an Array Matrix\n");
    int numArray[3][3], sizeOfArray;
    sizeOfArray = sizeof(numArray) / sizeof(numArray[0]);

    printf("Enter %d*%d times numbers\n", sizeOfArray, sizeOfArray);
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = 0; j < sizeOfArray; j++)
        {
            scanf("%d", &numArray[i][j]);
        }
    }

    printf("Matrix form of an Array\n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = 0; j < sizeOfArray; j++)
        {
            printf("%d ", numArray[i][j]);
        }
        printf("\n");
    }

    printf("Transposed Matrix\n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        for (int j = 0; j < sizeOfArray; j++)
        {
            printf("%d ", numArray[j][i]);
        }
        printf("\n");
    }

    return;
}