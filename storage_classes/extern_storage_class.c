#include <stdio.h>

int a; // Definition of the extern variable 'a'

int main() {
    printf("Extern Storage Class\n");
    {
        extern int a; // Declaration of the extern variable 'a'
        a = 10;
        printf("a => %d \n", a);
    }
    printf("a => %d", a);

    return 0; // Explicitly returning 0 from main
}
