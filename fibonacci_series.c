#include <stdio.h>

int main()
{
    printf("Fibonacci Series \n");
    int number, a = 1, b = 0, c;

    printf("Enter number: ");
    scanf("%d", &number);
    
    /* The `for` loop in the code snippet is generating the Fibonacci series up to a specified number.
    Here's a breakdown of what each step does within the loop: */
    for (int i = 1; i < number + 1; i++)
    {
        printf("%d ", b);
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}