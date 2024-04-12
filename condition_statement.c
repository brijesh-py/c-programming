#include <stdio.h>

void main()
{
    // condition statement

    // Less than: a < b
    // Less than or equal to: a <= b
    // Greater than: a > b
    // Greater than or equal to: a >= b
    // Equal to a == b
    // Not Equal to: a != b

    // Use if to specify a block of code to be executed, if a specified condition is true
    // Use else to specify a block of code to be executed, if the same condition is false
    // Use else if to specify a new condition to test, if the first condition is false
    // Use switch to specify many alternative blocks of code to be executed

    // if (<condition>)
    // {
    //     // block of code to be executed if the condition is true
    // }

    int x = 24;
    int y = 23;
    if (x > y)
    {
        printf("x is greater than y\n");
    }

    //  if (<condition>) {
    //   // block of code to be executed if the condition is true
    // } else {
    //   // block of code to be executed if the condition is false
    // }

    int time = 20;
    if (time < 18)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }

    // new blank line
    printf("\n");
    // if (<condition1>) {
    //   // block of code to be executed if condition1 is true
    // } else if (<condition2>) {
    //   // block of code to be executed if the condition1 is false and condition2 is true
    // } else {
    //   // block of code to be executed if the condition1 is false and condition2 is false
    // }

    int time2 = 22;
    if (time2 < 10)
    {
        printf("Good morning.");
    }
    else if (time2 < 20)
    {
        printf("Good day.");
    }
    else
    {
        printf("Good evening.");
    }

    printf("\n");

    // If...Else (Ternary Operator)
    // variable = (condition) ? expressionTrue : expressionFalse;
    int time3 = 20;
    (time3 < 18) ? printf("Good day.") : printf("Good evening.");

    // password checker
    int password = 10432;

    if (password == 10432)
    {
        printf("Correct code.\nThe door is now open.");
    }
    else
    {
        printf("Wrong code.\nThe door remains closed.");
    }
}