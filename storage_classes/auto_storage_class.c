#include <stdio.h>

void main()
{
    /*
    This is the default storage class for local variables. Variables declared within a function without a storage class specifier are treated as auto by default. They are automatically destroyed when the function exits.
    */
    printf("Auto Storage Class\n");
    // example with function

    int a = 10;
    printf("\nvariable a value is %d", a);

    /*
    //this is anonymous function it's call automatically
    //syntax
    {
        block of code
    }
     */

    {
        int a = 20;
        printf("\nVariable a before value is 10 and now is %d", a);
    }

    printf("\ndestroy anonymous function variable a value is %d", a);

    return;
}