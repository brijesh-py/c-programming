#include <stdio.h>

void main()
{
    printf("if-else if-else or if-elif-else Statement");
    /*
    if(<condition>)
    {
        // run this block of code "if" condition is true
    }
    else if(<condition>) or elif(<condition>)
    {
        // run this block of code "else if" condition is true
    }
    else
    {
        // run this block of code "else" condition is true
    }
    */

    int num1, num2, num3;
    printf("\nPrint largest and smallest number among three numbers\n");

    printf("Enter three number\n");
    scanf("%d %d %d", &num1, &num2, &num3);

    // if-else if-else
    if (num1 > num2 && num1 > num3)
    {
        // number one is largest number
        printf("\n%d is largest number", num1);
    }
    else if (num2 > num3 && num2 > num1)
    {
        // number two is largest number
        printf("\n%d is largest number", num2);
    }
    else if (num1 == num2 && num2 && num3)
    {
        // number one, tow and three are equals
        printf("\n%d, %d and %d  numbers are equals", num1, num2, num3);
    }
    else
    {
        // number three is largest number
        printf("\n%d is largest number", num3);
    }

    // print smallest number among three numbers
    // if-else if-else
    if (num1 < num2 && num1 < num3)
    {
        // number one is smallest number
        printf("\n%d is smallest number", num1);
    }
    else if (num2 < num3 && num2 < num1)
    {
        // number two is smallest number
        printf("\n%d is smallest number", num2);
    }
    else if (num1 == num2 && num2 && num3)
    {
        // number one, tow and three are equals
        printf("\n%d, %d and %d  numbers are equals", num1, num2, num3);
    }
    else
    {
        // number three is smallest number
        printf("\n%d is smallest number", num3);
    }

    return;
}