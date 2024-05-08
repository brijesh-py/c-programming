#include <stdio.h>

void main()
{
    int *ptr;
    // int arr[] = {1, 2, 3, 4, 5};
    // ptr = arr; // with array
    int arr = 3;
    ptr = &arr; // without array
    for (int i = 0; i < 4; i++)
    {
        printf("%p\n", ptr);
        ptr++;
    }

    return;
}