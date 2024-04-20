#include <stdio.h>

int main()
{
    // V=(4/3)πr3
    printf("Volume of Sphere \n");
    float radius, result;
    float const PI = 3.142;

    printf("Radius value: ");
    scanf("%f", &radius);

    result = (4.0 / 3.0) * PI * (radius * radius * radius);
    printf("Result is : ≈ %.2f", result);

    return 0;
}
