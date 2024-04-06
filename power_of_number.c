#include <stdio.h>

int main()
{
    printf("Power of a Number \n");
    int num, result;

    printf("Enter a Number: ");
    scanf("%d", &num);

    result = num * num;
    printf("Power is: %d", result);

    return 0;
}