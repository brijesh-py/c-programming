#include <stdio.h>

void main()
{
    // static variable is a variable that is declared outside a function and is initialized only once, it can be accessed and modified anywhere in the program
    // Can be local or global:
    // Local static: Retains its value between function calls within the same block.
    // Global static: Similar to a global variable but has scope limited to the file it's declared in (not accessible from other files).
    // Lifetime: Throughout the program execution, similar to global variables.
    // Example (Local Static):
    static int a = 10;
    printf("%d\n", a);

    a = 30;
    printf("%d\n", a);

    return;
}