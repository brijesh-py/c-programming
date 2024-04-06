#include <stdio.h>

int main()
{
    // V=πr2h
    printf("Volume of cylinder \n");
    float radius, height, result;
    float pi = 3.142;

    printf("Radius value: ");
    scanf("%f", &radius);

    printf("Height value: ");
    scanf("%f", &height);

    result = pi * (radius * radius) * height;
    printf("Result is: ≈%.2f", result);

    return 0;
}