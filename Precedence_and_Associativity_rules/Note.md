In C programming, operators have precedence and associativity, which determine the order in which they are evaluated in expressions. Precedence defines the priority of operators, while associativity defines the order in which operators of the same precedence are evaluated.

Here are some common precedence and associativity rules in C, along with examples:

1. **Parentheses ():** Parentheses have the highest precedence and are used to force the order of evaluation.

    ```c
    int result = (5 + 3) * 2; // result = 16
    ```

2. **Unary operators (!, ++, --):** Unary operators have higher precedence than binary operators.

    ```c
    int a = 5;
    int b = ++a * 2; // b = 12, a = 6
    ```

3. **Multiplication (*), Division (/), and Modulus (%):** These operators have higher precedence than addition and subtraction.

    ```c
    int result = 10 * 2 + 5; // result = 25
    ```

4. **Addition (+) and Subtraction (-):** Addition and subtraction have lower precedence than multiplication, division, and modulus.

    ```c
    int result = 10 + 2 * 5; // result = 20
    ```

5. **Assignment (=):** Assignment operator has lower precedence than almost all other operators.

    ```c
    int a = 5;
    int b = 10;
    int c = a + (b = 20); // c = 25, b = 20
    ```

6. **Associativity:** Operators with the same precedence are evaluated based on their associativity. Most binary operators associate left to right.

    ```c
    int result = 10 - 5 - 2; // result = 3
    ```

7. **Logical operators (&&, ||):** These operators have lower precedence than relational operators but higher than assignment operators.

    ```c
    int a = 5, b = 10;
    int result = (a > 0) && (b < 15); // result = 1 (true)
    ```

8. **Relational operators (==, !=, <, <=, >, >=):** These operators have higher precedence than logical operators.

    ```c
    int a = 5, b = 10;
    int result = a + 5 == b; // result = 1 (true)
    ```

Understanding precedence and associativity is crucial for writing correct and efficient C code. Always use parentheses when in doubt to explicitly specify the order of evaluation.