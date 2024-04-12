#include <stdio.h>

void main()
{
    // array is a collection of elements of the same data type

    // syntax
    // <data_type> <array_name>[<size>] = {<values>};

    int arr[20] = {1, 2, 3, 4, 5};
    /* `printf("%d", arr[2]);` is printing the value at the 3rd index (index 2) of the array `arr`. In
    this case, it will print the value `3` because arrays in C are zero-indexed, so the 3rd element
    is at index 2. */
    printf("%d \n\n", arr[2]);

    // real world example
    int num[5] = {1, 2, 3, 4, 5};
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("%d ", num[i]);
    }

    // multidimensional array
    int arr2[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("\n%d", arr2[2][2]);


}