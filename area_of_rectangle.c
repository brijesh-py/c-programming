#include <stdio.h>

int main()
{
    printf("Find area of Rectangle\n");

    int length, width, result;
    printf("Length value: ");
    scanf("%d", length);

    printf("Width value: ");
    scanf("%d", &width);

    result = length * width;
    printf("Result is : %d", result);
    return 0;
}
// Error:segmentation fault  "/home/mira/workspace/C Programming/"area_of_rectangle

// The segmentation fault was caused by not passing the address of the variables l and w to the scanf function. The scanf function needs the address of the variables to modify their values. To pass the address, we use the address-of operator (&).