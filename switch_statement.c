#include <stdio.h>

void main()
{
    // switch statement is used to perform different actions based on different conditions or values

    // syntax
    // switch(<expression>){
    //     case <value1>:
    //         // block of code to be executed if expression is equal to value1
    //         break;
    //     case <value2>:
    //         // block of code to be executed if expression is equal to value2
    //         break;
    //     default:
    //         // block of code to be executed if expression is not equal to any of the values
    // }

    // The switch expression is evaluated once
    // The value of the expression is compared with the values of each case
    // If there is a match, the associated block of code is executed
    // The break statement breaks out of the switch block and stops the execution
    // The default statement is optional, and specifies some code to run if there is no case match

    // get a number from user
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // use switch statement
    switch (number)
    {
    case 1:
        printf("One");
        break;
    case 2:
        printf("Two");
        break;
    case 3:
        printf("Three");
        break;
    default:
        printf("Invalid number");
    }

    // get day
    int day;
    printf("\nEnter a day: ");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default:
        printf("Invalid day");
    }
}