#include <stdio.h>

int main()
{
    printf("Find Area of Triangle");
    int height, base, result;
    printf("\nEnter base value: ");
    scanf("%d", &base);
    printf("Enter height value: ");
    scanf("%d", &height);
    result = (height * base) / 2;
    printf("Result is :%d", result);
    return 0;
}