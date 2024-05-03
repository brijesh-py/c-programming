#include <stdio.h>

void main()
{
    // array declaration
    int arr[5];

    // array initialization
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 40;
    arr[4] = 50;

    // array traversal
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nArray of First Element: %d", arr[0]);
    printf("\nArray of Last Element: %d", arr[4]);
    printf("\nArray of 3rd Element: %d", arr[2]);
    
    return;
}