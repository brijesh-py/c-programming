#include <stdio.h>
// #include <conio.h> // for turbo c++

// For message
char *message, app_name[] = "Mira-Calc", operations_message[] = "Choose Operator(+, -, *, / and %)";

void iOOperations(); // declaration of iOOperations  function

// entry function
void main()
{
    // clrscr(); // for turbo c++
    printf("***Welcome to %s***\n", app_name);
    iOOperations(); // calling iOOperations
    // getch(); // for turbo c++
    return;
}

// addition
void addition(int *num1, int *num2, float *result)
{
    message = "Add";
    *result = *num1 + *num2;
    return;
}

// subtract
void subtract(int *num1, int *num2, float *result)
{
    message = "Subtract";
    *result = *num1 - *num2;
    return;
}

// product
void product(int *num1, int *num2, float *result)
{
    message = "Product";
    *result = *num1 * *num2;
    return;
}

// quotient
void quotient(int *num1, int *num2, float *result)
{
    message = "Quotient";
    if (*num2 == 0)
    {
        printf("Division by zero is undefined\n");
        *result = 0;
    }
    else
        *result = (float)*num1 / *num2;

    return;
}

// reminder
void reminder(int *num1, int *num2, float *result)
{
    message = "Reminder";
    *result = *num1 % *num2;
    return;
}

// decision on operator, which operator on call that function
void calculateValue(int *num1, int *num2, char *ope, float *result)
{
    switch (*ope)
    {
    case '+':
        addition(num1, num2, result);
        break;
    case '-':
        subtract(num1, num2, result);
        break;
    case '*':
        product(num1, num2, result);
        break;
    case '/':
        quotient(num1, num2, result);
        break;
    case '%':
        reminder(num1, num2, result);
    default:
        printf("\nYou are blind.\n");
        printf("%s\n", operations_message);
        message = "Ops";
        *result = 0;
    }

    return;
}

void iOOperations()
{
    // declaration of variable
    int number1, number2;
    float result;
    char operator, do_continue;

    // I/O operations
    printf("Enter 1st Number: ");
    scanf("%d", &number1);
    printf("Enter 2nd Number: ");
    scanf("%d", &number2);
    printf("%s: ", operations_message);
    scanf(" %c", &operator);

    calculateValue(&number1, &number2, &operator, & result); // calling calculateValue function
    printf("%s of %d %c %d = %.2f", message, number1, operator, number2, result);

    printf("\n\nDo You want to Continue y/n: ");
    scanf(" %c", &do_continue);

    // check user continue or not
    if (do_continue == 'y')
        iOOperations();
    else
        printf("**Thanks for using %s**", app_name);

    return;
}