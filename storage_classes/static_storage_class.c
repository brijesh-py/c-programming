#include <stdio.h>

void with_static_increment()
{
    static int count = 0; // Static variable
    count++;
    printf("Count: %d\n", count);

    return;
}

void without_static_increment()
{
    int count = 0; // Auto variable
    count++;
    printf("Count: %d\n", count);
    
    return;
}

int main()
{
    // with static variable
    printf("With static variable\n");
    with_static_increment(); // Prints: Count: 1
    with_static_increment(); // Prints: Count: 2
    with_static_increment(); // Prints: Count: 3

    // without static variable
    printf("\nWithout static variable\n");
    without_static_increment(); // Prints: Count: 1
    without_static_increment(); // Prints: Count: 1
    without_static_increment(); // Prints: Count: 1

    return 0;
}