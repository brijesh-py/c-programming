#include <stdio.h>

void main()
{
    printf("Static Storage Class\n");
    static int a = 12;
    a = 34;
    printf("a => %d \n", a);
    return;
}