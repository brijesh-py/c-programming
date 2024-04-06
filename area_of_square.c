#include <stdio.h>

int main()
{
    printf("Find Area of Square\n");
    int area, result;

    printf("Area of value: ");
    scanf("%d", &area);

    result = area * area;
    printf("Result is: %d", result);

    return 0;
}