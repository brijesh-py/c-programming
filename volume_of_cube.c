#include <stdio.h>

int main()
{
    // V=a3=123=1728
    printf("Volume of Cube\n");
    float volume, result;

    printf("Volume of value: ");
    scanf("%f", &volume);

    result = volume * volume * volume;
    printf("Result is : %.1f", result);
    return 0;
}