#include <stdio.h>

void main()
{
    // row: 1, column: 6
    for (int i = 0; i <= 5; i++)
    {
        printf("*");
    }
    printf("\n");

    // row: 5, column: 5
    for (int i = 0; i <= 4; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // revers row:5, column:5
    for (int i = 4; i >= 0; i--)
    {
        for (int j = i; j >= 0; j--)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");

    // row 11, column: 6
    int a = 1;
    for (int i = 0; i <= 5;)
    {
        if (i <= 4 && a == 1)
        {
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            i++;
        }
        else
        {
            a = 0;
            i--;
            for (int j = i; j >= 0; j--)
            {
                printf("*");
            }
        }
        if (i < 0)
            break;
        printf("\n");
    }

    printf("\n");

    // revers row:9, column: 5
    int a2 = 1, i = 5, k = i - 2;
    for (i; i >= 0;)
    {
        if (i > 0 && a2 == 1)
        {
            i--;
            for (int j = i; j >= 0; j--)
            {
                printf("*");
            }
        }
        else
        {
            a2 = 0;
            i++;
            for (int j = 0; j <= i; j++)
            {
                printf("*");
            }
            if (i > k)
            {
                break;
            }
        }
        printf("\n");
    }

    return;
}