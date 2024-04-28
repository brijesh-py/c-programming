#include <stdio.h>

void main()
{
    // A pointer is a variable which contains the address of another variable;
    /*
    & => address or reference, unary operator &variable_name
    * => dereference or indirection operator *pointer_variable_name
    */
    int i = 5;                           // & = address or reference
    int *j;                              // pointer variable, *= dereference or indirection
    j = &i;                              //  j point to i
    printf("%p, %p, %d", j, &i, i);      // 0x7ffe53a742f4, 0x7ffe53a742f4, 5
    printf("\n%d, %d, %p", *j, *&i, &j); // 5, 5, 0x7fff178045c0

    return;
}