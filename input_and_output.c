#include <stdio.h>

/* In the context of the C programming language, `int` is a keyword used to specify the return type of
a function or the data type of a variable. */
int main()
{
    printf("Welcome to C Programming! \n");
    /* `char name[30];` is declaring an array named `name` that can hold up to 30 characters. This
    array is used to store the name input by the user. */
    char name[30];

    printf("Enter your name: ");

    /* `scanf(" %s", &name);` is a function call that reads input from the standard input (usually the
    keyboard) and stores it in the variable `name`. */
    scanf(" %s", &name);

    printf("Hello, %s", name);

    /* `return 0;` in the `main` function is used to indicate the successful execution of the program.
    In C programming, the `main` function should return an integer value to the operating system
    upon completion. By convention, a return value of 0 typically signifies that the program
    executed successfully without any errors. This return value can be used by the calling process
    or the operating system to determine the outcome of the program execution. */
    return 0;
}