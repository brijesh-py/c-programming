#include <stdio.h>

void main()
{
    printf("Array Examples\n");
    int array[3][2] = {{1, 2}, {3, 4}, {5, 6}}; // 2-d array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    int array1[2][2][2] = {{{1, 2}, {3, 4}}, {{5, 6}, {7, 8}}}; // 3-d array

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d ", array1[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int array2[3];
    // input array value
    for (int i = 0; i < 3; i++)
    {
        scanf("%d", &array2[i]);
    }
    // iterate array values
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", array2[i]);
    }

    int array3[2][2];
    // input 2-2 array
    printf("Input 2x2 array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &array3[i][j]);
        }
    }
    // iterate 2-d array
    printf("Printing 2x2 array\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", array3[i][j]);
        }
        printf("\n");
    }

    int array4[3][3][3];
    int size =  sizeof(array4) / sizeof(array4[0]);
    printf("\nInput 3x3x3 array\n");
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                scanf("%d", &array4[i][j][k]);
            }
        }
    }
    printf("Printing 3x3x3 array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", array4[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    int array5[2][2] = {{1, 2}, {3, 4}}; // 2-d array transposed
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", array5[j][i]);
        }
        printf("\n");
    }

    int array6[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}; // 3-d array transposed

    printf("Matrix Array\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array6[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix transposed\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", array6[j][i]);
        }
        printf("\n");
    }

    int array7[2][2] = {1, 2, 3, 4};
    printf("%d", array7[1][1]);

    return;
}