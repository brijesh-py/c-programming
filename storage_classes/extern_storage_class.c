#include <stdio.h>

int number = 12; // global variable is number

int main()
{
    printf("Extern Storage Class\n");
    {
        extern int number; // Declaration of the extern variable 'number'
        number = 11;
        printf("number => %d \n", number); // "with extern variable number is 11"
    }
    printf("number => %d", number); // global variable "without extern variable number is 12 and with extern variable number is 11"

    return 0; // Explicitly returning 0 from main
}
