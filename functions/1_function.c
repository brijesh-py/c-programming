#include <stdio.h>

// function is a block of code that performs a specific task and returns a value
// to reuse the code

// syntax
// function  declaration
// <data_type> <function_name>(<parameters>){
// function  declaration
// block of code to be executed
// }
// <function_name>(arguments); function calling

// example 1
//  function declaration
void greet()
{
    // function definition
    printf("Hello, John! \n");
    return;
}

// example 2
// say hello with paramater
void say_hello(char name[5]) // char name[4] is a parameter
{
    printf("Hello, %s", name);
    return;
}

// example 3
// sum of numbers
int sum_of_numbers(int result, int sum_numbers)
{
    printf("Sum of %d numbers is : %d", result, sum_numbers);
    return 0;
}

void main()
{
    printf("Functions in C \n");

    greet(); // function calling

    char name[20];
    printf("\nEnter your name: ");
    scanf(" %s", &name);
    say_hello(name); // "john" is a argument

    // sum of numbers
    int sum = 20, result;
    printf("\n\nEnter number: ");
    scanf("%d", &sum);
    for (int i = 0; i <= sum; i++)
    {
        // result = i + result;
        // or
        result += i;
    }
    sum_of_numbers(sum, result);
}