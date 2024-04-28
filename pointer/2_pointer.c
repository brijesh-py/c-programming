#include <stdio.h>

int swapping(int *, int *); // function declaration
void main()
{

    printf("Swapping number with using Pointer\n");
    int a, b;
    printf("Enter two numbers\n");
    scanf("%d%d", &a, &b);
    swapping(&a, &b); // call by reference
    printf("%d, %d", a, b);

    return;
}

int swapping(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}