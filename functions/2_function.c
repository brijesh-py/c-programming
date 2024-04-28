#include <stdio.h>

int average(int a, int b, int c, int d, int e)
{
    // calculate the average
    return (a + b + c + d + e) / 5;
}

void main()
{
    printf("Average of 5 numbers\n");
    int a, b, c, d, e;

    printf("Enter 5 numbers\n");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);

    printf("Average = %d\n", average(a, b, c, d, e));


    return;
}