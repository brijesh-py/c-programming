#include <stdio.h>

int main()
{
    printf("Find area of Rectangle\n");

    int l, w, result;
    printf("Length value: ");
    scanf("%d", &l);

    printf("Width value: ");
    scanf("%d", &w);

    result = l * w;
    printf("Result is : %d", result);
    return 0;
}
// Error:
// The segmentation fault was caused by not passing the address of the variables l and w to the scanf function. The scanf function needs the address of the variables to modify their values. To pass the address, we use the address-of operator (&).