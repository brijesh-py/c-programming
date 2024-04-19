// Function to add two numbers
double add(double number1, double number2)
{
    return number1 + number2;
}

// Function to subtract two numbers
double subtract(double number1, double number2)
{
    return number1 - number2;
}

// Function to product two numbers
double product(double number1, double number2)
{
    return number1 * number2;
}

// Function to quotient two numbers
double quotient(double number1, double number2)
{
    if (number2 != 0)
    {
        return number1 / number2;
    }
    else
    {
        return -1; // Indicate division by zero error
    }
}
