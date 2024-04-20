#include <stdio.h>

void main()
{
    /*
    This storage class is used to define local variables that should be stored in a register instead of RAM. However, the compiler can ignore this request, and it's typically used as a hint to the compiler for optimization.
    */
    printf("Register Storage Class\n");

    register int a = 10;
    while (a <= 100)
    {
        printf("I value is %d \n", a);
        a++;
    }

    return;
}