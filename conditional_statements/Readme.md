Conditional statements in C programming are used to execute certain code blocks based on certain conditions.

1. **if statement**: It is used to execute a block of code if a specified condition is true. If the condition is false, the block is skipped.

```c
if (condition) {
    // code block to be executed if condition is true
}
```

2. **if-else statement**: It is used to execute one block of code if the condition is true and another block of code if the condition is

false.

```c
if (condition) {
    // code block to be executed if condition is true
} else {
    // code block to be executed if condition is false
}
```

3. **if-else if-else statement**: It allows you to check multiple conditions and execute a block of code corresponding to the first condition that evaluates to true. If none of the conditions are true, the else block (if present) is executed.

```c
if (condition1) {
    // code block to be executed if condition1 is true
} else if (condition2) {
    // code block to be executed if condition2 is true
} else {
    // code block to be executed if all conditions are false
}
```

4. **Nesting if-else statements**: It involves placing if-else statements inside other if-else statements. This allows for more complex condition checking.

```c
if (condition1) {
    if (condition2) {
        // code block to be executed if both condition1 and condition2 are true
    } else {
        // code block to be executed if condition1 is true but condition2 is false
    }
} else {
    // code block to be executed if condition1 is false
}
```

Remember to replace `condition` with an actual logical expression that evaluates to either true or false. And always use curly braces `{}` to define the block of code associated with each statement, even if it contains only one statement.