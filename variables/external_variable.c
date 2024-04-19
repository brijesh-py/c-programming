#include <stdio.h>

// File 1 (variable definition)
int shared_value = 20;
extern int shared_value; // Optional here (already defined)

void main()
{
    printf("Shared value: %d\n", shared_value);
    shared_value = 30;
    printf("Shared value: %d\n", shared_value);
    return;
}