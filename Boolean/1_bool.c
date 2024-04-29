#include <stdio.h>
#include <stdbool.h>

void main()
{
    // Boolean is a type of data type, that hold a boolean value true and false
    printf("Boolean Data type\n");
    bool x = true;  // true: 1
    bool y = false; // false: 0

    if (x)
    {
        printf("x is true\n");
    }

    if (y)
    {
        printf("y is true\n");
    }

    printf("x = %d\n", x); // true: 1
    printf("y = %d\n", y); // false: 0

    return;
}