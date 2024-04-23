#include <stdio.h>

void main()
{
    printf("Nesting if-else Statement\n");
    /*
    // Nesting if-else statement syntax
    if(<condition>)
    {
        if(<condition>)
        {
            // run block of code "if" both condition is true
        }
    }
    else
    {
        if(<condition>)
        {
            // run block of code "else" and "if"  condition is true
        }
    }
    */

    printf("Print Largest Number\n");
    int num1, num2, num3;

    printf("Enter three numbers\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // nesting if else
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("%d is largest number", num1);
        }
        // you can use else statement if the required
    }
    else if (num2 > num3)
    {
        if (num2 > num1)
        {
            printf("%d is largest number", num2);
        }
        // you can use else statement if the required
    }
    else if (num2 == num3)
    {
        if (num2 == num1)
        {
            printf("%d, %d and %d are equals number", num1, num2, num3);
        }
        // you can use else statement if the required
    }
    else
    {
        printf("%d is largest number", num3);
        // you can use nesting statement if the required
    }

    return;
}