## Custom header file

**calculator.h**

```c
#ifndef CALCULATOR_H
#define CALCULATOR_H

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

#endif
```

## To compile and run the program, you can use the following commands:

```bash
gcc -c calculator.c
gcc main.c calculator.o -o calculator
./calculator
```
