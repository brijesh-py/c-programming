#include <stdio.h>

void main()
{
    printf("_Bool\n");
    _Bool x = 1;
    _Bool y = 0;
    if (x) /* Equivalent to if (x == 1) */
    {
        puts("This will print!");
    }
    if (!y) /* Equivalent to if (y == 0) */
    {
        puts("This will also print!");
    }

    return;
}