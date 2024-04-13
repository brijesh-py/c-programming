#include <stdio.h>
#include "calculator.h"

int main() {
    double num1, num2, result;
    char operator;

    // Get input from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform the calculation based on the operator
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            result = divide(num1, num2);
            if (result == -1) {
                printf("Error: Division by zero!\n");
                return 1; // Indicate error
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            return 1; // Indicate error
    }

    // Output the result
    printf("Result: %.2f\n", result);

    return 0; // Indicate success
}
