#include <stdio.h>

int average(int avg)
{
    return avg / 5;
}

void main()
{
    printf("Average calculating using loop\n");
    int avg = 0, i = 1, sum = 0;

    printf("Enter 5 numbers\n");
    while (i <= 5)
    {
        scanf("%d", &avg);
        sum = sum + avg;
        i++;
    }
    printf("Average of 5 numbers is: %d", average(sum));

    return;
}