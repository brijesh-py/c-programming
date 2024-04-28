#include <stdio.h>

void main()
{
    /*
     In C programming, the goto statement allows you to transfer control unconditionally to a labeled statement within the same function.
     syntax:
     goto label;

     label:
    // code

    */

int i = 0;

start: // label
    printf("Current value of i: %d\n", i);
    i++;
    if (i < 5)
        goto start; // jump to label "start"

    return;
}