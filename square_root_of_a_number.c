#include <stdio.h>
#include <math.h>

int main()
{
    printf("Square root of a number \n");
    int num;
    float squareRoot;

    printf("Enter a number: ");
    scanf("%d", &num);

    squareRoot = sqrt(num);
    printf("square is: %f", squareRoot);

    return 0;
}

// Error: sqrt(num);
// squareRoot = sqrt(num);
//       |                  ^~~~
// square_root_of_a_number.c:13:18: note: include ‘<math.h>’ or provide a declaration of ‘sqrt’
// undefined reference to `sqrt'
// collect2: error: ld returned 1 exit status

// solution:
// gcc -o square_root_of_a_number square_root_of_a_number.c -lm