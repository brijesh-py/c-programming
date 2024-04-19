#include <stdio.h>      // standard header file
#include "calculator.h" // custom header file

double result; // result is global variable
int performOperation(double num1, double num2, char operator)
{
    switch (operator)
    {
    case '+':
        result = add(num1, num2);
        break;
    case '-':
        result = subtract(num1, num2);
        break;
    case '*':
        result = product(num1, num2);
        break;
    case '/':
        result = quotient(num1, num2);
        break;
    default:
        printf("\nChoose operator (+, -, *, /)");
        return -1;
    }

    return 0;
}

void takeInputFromUser()
{
    double num1, num2; // declare variables
    char operator;     // declare operator variable

    // Get input from the user
    printf("\nEnter first number: ");
    scanf("%lf", &num1);

    printf("Choose operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // calculating
    int success_or_fail = performOperation(num1, num2, operator);
    if (success_or_fail == 0)
    {
        // Output the result
        printf("\n1st Number is => %.2f\n2nd Number is => %.2f\nResult is => %.2f\n", num1, num2, result);
    }

    return;
}

int main()
{
    // Print welcome message
    printf("Welcome to the Calculator !\n");

    char yes_or_no;
    while (1)
    {
        takeInputFromUser();

        printf("\nDo you want to continue y/n: ");
        scanf(" %c", &yes_or_no);
        if (yes_or_no == 'y')
        {
            takeInputFromUser();
        }
        else
        {
            printf("\nThank for using Calculator\nGood bye");
            break;
        }
    }

    return 0; // Indicate success
}
