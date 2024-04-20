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

   /* The line `printf("Hello, %s", name);` is responsible for displaying a formatted output to the
   standard output (usually the console). */
    printf("Hello, %s", name);

    /* `puts("Hello World!");` is a standard library function in C that is used to output a string to
    the standard output (usually the console). In this case, it will display "Hello World!" followed
    by a newline character. The difference between `puts` and `printf` is that `puts` automatically
    appends a newline character at the end of the output, while `printf` requires explicit
    formatting for newline characters. */
    puts("\nHello World!\n");

    /* `getchar();` is a standard library function in C that is used to read a character from the
    standard input (usually the keyboard). The function returns the character read as an integer
    value. */
    int c = getchar();
    printf("%d", c);

    /* `return 0;` in the `main` function is used to indicate the successful execution of the program.
    In C programming, the `main` function should return an integer value to the operating system
    upon completion. By convention, a return value of 0 typically signifies that the program
    executed successfully without any errors. This return value can be used by the calling process
    or the operating system to determine the outcome of the program execution. */
    return 0;
}