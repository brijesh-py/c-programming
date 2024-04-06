#include <stdio.h>

int main()
{
    printf("Find area of circle\n");
    float pi = 3.142;
    float radius, result;

    printf("Radius value: ");
    scanf("%f", &radius);

    result = pi * (radius * radius);
    // Limit the number of decimal places to 2 (%.2f)
    printf("Result is : %.2f", result);
    return 0;
}

// Error: scanf("%f", radius);
// terminated by signal SIGSEGV (Address boundary error)