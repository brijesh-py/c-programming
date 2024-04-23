#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();

    // Your code with loops here
    register int i = 0;
    for (i; i < 10000000; i++)
    {
        // Loop operations
    }

    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    // register with used approximate time is: 0.006320
    // without register with used approximate time is: 0.037782
    printf("CPU time used: %f seconds\n", cpu_time_used);

    return 0;
}
